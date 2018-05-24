/*
        // current mc_current
        //   1 == CC, 2 == NC
        // get GENIE reaction code
        // ...  mc_intType as of GENIE 2.8.4, the int type enum
        // ($GENIE/src/Interaction/ScatteringType.h) was:
        // typedef enum EScatteringType {
        //   * == seen in the MC files...
        // 0          kScNull = 0,
        // 1    *     kScQuasiElastic,
        // 2    *     kScDeepInelastic,
        // 3    *     kScResonant,
        // 4    *     kScCoherent,
        // 5          kScDiffractive,
        // 6    *     kScNuElectronElastic,
        // 7          kScInverseMuDecay,
        // 8          kScAMNuGamma,
        // 9          kScMEC,
        // 10         kScCoherentElas,
        // 11         kScInverseBetaDecay,
        // 12         kScGlashowResonance,
        // 13         kScIMDAnnihilation
        //         } ScatteringType_t;
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <random>
#include <functional>
#include <limits>

#include "hep_hpc/hdf5/File.hpp"
#include "hep_hpc/hdf5/make_column.hpp"
#include "hep_hpc/hdf5/make_ntuple.hpp"
#include "hep_hpc/hdf5/PropertyList.hpp"
#include "NtupleTypes.h"

#include "RecoTracksUtils.h"

using namespace hep_hpc::hdf5;
using namespace RECOTRACKS_ANA;

// I know this must be available in some header somewhere, but it is way
// easier to just put a copy here than go find that header...
const int32_t PDG_PROTON = 2212;
const int32_t PDG_NEUTRON = 2112;
const int32_t PDG_PIPLUS = 211;
const int32_t PDG_PIZERO = 111;
const int32_t PDG_PIMINUS = -211;
const int32_t PDG_KPLUS = 321;
const int32_t PDG_KMINUS = -321;
const int32_t PDG_SIGMAPLUS = 3222;
const int32_t PDG_SIGMAMINIUS = 3112;

const int32_t PDG_ELECTRON = 11;
const int32_t PDG_NUE = 12;
const int32_t PDG_MUON = 13;
const int32_t PDG_NUMU = 14;
const int32_t PDG_TAU = 15;
const int32_t PDG_NUTAU = 16;

const int32_t PDG_POSITRON = -11;
const int32_t PDG_NUEBAR = -12;
const int32_t PDG_ANTIMUON = -13;
const int32_t PDG_NUMUBAR = -14;
const int32_t PDG_ANTITAU = -15;
const int32_t PDG_NUTAUBAR = -16;


bool is_neutrino(int abs_pdgcode) {
    if (abs_pdgcode == PDG_NUE) return true;
    if (abs_pdgcode == PDG_NUMU) return true;
    if (abs_pdgcode == PDG_NUTAU) return true;
    return false;
}


int Skim(int n_max_evts, double max_z,
        std::string filebasename, 
        int first_event_number, bool is_data, std::string ntuple_list_file,
        bool norm_to_max, bool do_low_w_cut, bool do_high_w_cut,
        double w_cut_val_mev, int print_freq, double train_threshold,
        double valid_test_threshold)
{
    RecoTracksUtils utils;
    //! Get MC Tree
    /* you basically always want n_mcfiles = -1 to get all files... */
    TChain* tree_mc = utils.getMCTree("NuECCQE", ntuple_list_file, -1, false);
    int entries_mc = tree_mc->GetEntries();
    EnhNuECCQE* mc = new EnhNuECCQE( tree_mc );

    std::cout << "Loaded chain with " << entries_mc << " events." << std::endl;

    /* - need a bit of thought on the hadron mult structure
    */

    // this is ugly, but not sure exactly how to do this nicely... can we use
    // auto to just return sets of results from multple calls to make_ntuple,
    // with train/valid/test as argument defs? probably, but not sure...

    // train file...
    std::string hdf5_name_train = filebasename + "_train.hdf5";
    File hdffile_train(hdf5_name_train, H5F_ACC_TRUNC);
    auto eventdat_train = make_ntuple({hdffile_train, "event_data"},
            make_scalar_column<unsigned long int>("eventids"),
            make_scalar_column<unsigned int>("eventids_a"),
            make_scalar_column<unsigned int>("eventids_b")
            ); 
    auto imgdat_train = make_ntuple({hdffile_train, "img_data"},
            make_column<float, 3>("hitimes-x", {2, 127, 94}),
            make_column<float, 3>("hitimes-u", {2, 127, 47}),
            make_column<float, 3>("hitimes-v", {2, 127, 47})
            );
    auto vtxdat_train = make_ntuple({hdffile_train, "vtx_data"},
            make_scalar_column<float>("zs")
            ); 
    auto gendat_train = make_ntuple({hdffile_train, "gen_data"},
            make_scalar_column<unsigned int>("sig_type"),
            make_scalar_column<unsigned int>("current"),
            make_scalar_column<unsigned int>("int_type"),
            make_scalar_column<unsigned int>("targetZ"),
            make_scalar_column<float>("E"),
            make_scalar_column<float>("leptE"),
            make_scalar_column<float>("W"),
            make_scalar_column<float>("x"),
            make_scalar_column<float>("y"),
            make_scalar_column<float>("Q2")
            ); 
    auto hadrodat_train = make_ntuple({hdffile_train, "hadro_data"},
            make_scalar_column<uint32_t>("n_protons"),
            make_scalar_column<uint32_t>("n_neutrons"),
            make_scalar_column<uint32_t>("n_chgdpions"),
            make_scalar_column<uint32_t>("n_neutpions"),
            make_scalar_column<uint32_t>("n_chgdkaons"),
            make_scalar_column<uint32_t>("n_others"),
            make_scalar_column<uint32_t>("n_hadmultmeas"),
            make_scalar_column<float>("esum_protons"),
            make_scalar_column<float>("esum_neutrons"),
            make_scalar_column<float>("esum_chgdpions"),
            make_scalar_column<float>("esum_neutpions"),
            make_scalar_column<float>("esum_chgdkaons"),
            make_scalar_column<float>("esum_others"),
            make_scalar_column<float>("esum_hadmultmeas")
            ); 

    // valid file...
    std::string hdf5_name_valid = filebasename + "_valid.hdf5";
    File hdffile_valid(hdf5_name_valid, H5F_ACC_TRUNC);
    auto eventdat_valid = make_ntuple({hdffile_valid, "event_data"},
            make_scalar_column<unsigned long int>("eventids"),
            make_scalar_column<unsigned int>("eventids_a"),
            make_scalar_column<unsigned int>("eventids_b")
            ); 
    auto imgdat_valid = make_ntuple({hdffile_valid, "img_data"},
            make_column<float, 3>("hitimes-x", {2, 127, 94}),
            make_column<float, 3>("hitimes-u", {2, 127, 47}),
            make_column<float, 3>("hitimes-v", {2, 127, 47})
            );
    auto vtxdat_valid = make_ntuple({hdffile_valid, "vtx_data"},
            make_scalar_column<float>("zs")
            ); 
    auto gendat_valid = make_ntuple({hdffile_valid, "gen_data"},
            make_scalar_column<unsigned int>("sig_type"),
            make_scalar_column<unsigned int>("current"),
            make_scalar_column<unsigned int>("int_type"),
            make_scalar_column<unsigned int>("targetZ"),
            make_scalar_column<float>("E"),
            make_scalar_column<float>("leptE"),
            make_scalar_column<float>("W"),
            make_scalar_column<float>("x"),
            make_scalar_column<float>("y"),
            make_scalar_column<float>("Q2")
            ); 
    auto hadrodat_valid = make_ntuple({hdffile_valid, "hadro_data"},
            make_scalar_column<uint32_t>("n_protons"),
            make_scalar_column<uint32_t>("n_neutrons"),
            make_scalar_column<uint32_t>("n_chgdpions"),
            make_scalar_column<uint32_t>("n_neutpions"),
            make_scalar_column<uint32_t>("n_chgdkaons"),
            make_scalar_column<uint32_t>("n_others"),
            make_scalar_column<uint32_t>("n_hadmultmeas"),
            make_scalar_column<float>("esum_protons"),
            make_scalar_column<float>("esum_neutrons"),
            make_scalar_column<float>("esum_chgdpions"),
            make_scalar_column<float>("esum_neutpions"),
            make_scalar_column<float>("esum_chgdkaons"),
            make_scalar_column<float>("esum_others"),
            make_scalar_column<float>("esum_hadmultmeas")
            ); 

    // test file...
    std::string hdf5_name_test = filebasename + "_test.hdf5";
    File hdffile_test(hdf5_name_test, H5F_ACC_TRUNC);
    auto eventdat_test = make_ntuple({hdffile_test, "event_data"},
            make_scalar_column<unsigned long int>("eventids"),
            make_scalar_column<unsigned int>("eventids_a"),
            make_scalar_column<unsigned int>("eventids_b")
            ); 
    auto imgdat_test = make_ntuple({hdffile_test, "img_data"},
            make_column<float, 3>("hitimes-x", {2, 127, 94}),
            make_column<float, 3>("hitimes-u", {2, 127, 47}),
            make_column<float, 3>("hitimes-v", {2, 127, 47})
            );
    auto vtxdat_test = make_ntuple({hdffile_test, "vtx_data"},
            make_scalar_column<float>("zs")
            ); 
    auto gendat_test = make_ntuple({hdffile_test, "gen_data"},
            make_scalar_column<unsigned int>("sig_type"),
            make_scalar_column<unsigned int>("current"),
            make_scalar_column<unsigned int>("int_type"),
            make_scalar_column<unsigned int>("targetZ"),
            make_scalar_column<float>("E"),
            make_scalar_column<float>("leptE"),
            make_scalar_column<float>("W"),
            make_scalar_column<float>("x"),
            make_scalar_column<float>("y"),
            make_scalar_column<float>("Q2")
            ); 
    auto hadrodat_test = make_ntuple({hdffile_test, "hadro_data"},
            make_scalar_column<uint32_t>("n_protons"),
            make_scalar_column<uint32_t>("n_neutrons"),
            make_scalar_column<uint32_t>("n_chgdpions"),
            make_scalar_column<uint32_t>("n_neutpions"),
            make_scalar_column<uint32_t>("n_chgdkaons"),
            make_scalar_column<uint32_t>("n_others"),
            make_scalar_column<uint32_t>("n_hadmultmeas"),
            make_scalar_column<float>("esum_protons"),
            make_scalar_column<float>("esum_neutrons"),
            make_scalar_column<float>("esum_chgdpions"),
            make_scalar_column<float>("esum_neutpions"),
            make_scalar_column<float>("esum_chgdkaons"),
            make_scalar_column<float>("esum_others"),
            make_scalar_column<float>("esum_hadmultmeas")
            ); 

    // views vectors...
    std::vector<float> xs_1d;
    std::vector<float> us_1d;
    std::vector<float> vs_1d;
    std::vector<float> xs_1d_t;
    std::vector<float> us_1d_t;
    std::vector<float> vs_1d_t;

    // rng for choosing events based on target balancing...
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0.0, 1.0);

    int i = first_event_number;
    int n_proc = 0;
    if (n_max_evts < 0) {
        n_proc = entries_mc;
    }
    else {
        n_proc = n_max_evts < entries_mc ? n_max_evts : entries_mc;
    }
    n_proc += first_event_number;
    for (i = first_event_number; i < n_proc; ++i) {

        if ((i + 1) % print_freq == 0) {
            std::cout << "Processed " << i << " / " << entries_mc << " ( " << 
                double(i)/entries_mc * 100.0 << " \%) events..." << std::endl;
        }
        mc->GetEntry(i);

        uint32_t current = mc->mc_current;
        uint32_t int_type = mc->mc_intType;
        uint32_t targetZ = (uint32_t)mc->mc_targetZ;
        double E = mc->mc_incomingE;
        double leptE = mc->mc_primFSLepton[3];
        double W = mc->mc_w;
        double x_bj = mc->mc_Bjorkenx;
        double y_bj = mc->mc_Bjorkeny;
        double Q2 = mc->mc_Q2;

        uint32_t sig_type = 0;  // NC
        int pdg_lep = mc->mc_primaryLepton;
        if (current == 1) {     // CC
            int abs_lep = pdg_lep < 0 ? -1 * pdg_lep : pdg_lep;
            if (abs_lep  == PDG_ELECTRON) {
                sig_type = 1;   // CC - NuE
            }
            else if (abs_lep  == PDG_MUON) {
                sig_type = 2;   // CC - NuMu
            }
            else {
                sig_type = 3;   // CC - NuTau, basically
            }
        }

        if (do_low_w_cut || do_high_w_cut) {
            if (do_low_w_cut) {
                if (W > w_cut_val_mev) continue;
            }
            if (do_high_w_cut) {
                if (W <= w_cut_val_mev) continue;
            }
        }

        // skip the event if z is too far downstream
        double true_z = -1e6;
        if (!is_data) true_z = mc->mc_vtx[2];
        if (true_z > max_z) {
            continue;
        }

        for (unsigned int j = 0; j < mc->getLatticeSize(); ++j) {
            double energy_at_idx = mc->latticeNormEnergySums[j];
            double time_at_idx = mc->latticeRelativeTimes[j];
            unsigned int idx = (unsigned int)mc->latticeEnergyIndices[j];
            std::string view = mc->getStringViewFromLatticePos(idx);
            if (view == "X") {
                xs_1d.push_back(energy_at_idx);
                xs_1d_t.push_back(time_at_idx);
            }
            else if (view == "U") {
                us_1d.push_back(energy_at_idx);
                us_1d_t.push_back(time_at_idx);
            }
            else if (view == "V") {
                vs_1d.push_back(energy_at_idx);
                vs_1d_t.push_back(time_at_idx);
            }
        }

        int run, subrun, gate, slice;
        if (is_data) {
            run = mc->ev_run;
            subrun = mc->ev_subrun;
            gate = mc->ev_gate;
            slice = mc->physEvtNum;
        } 
        else {
            run =  mc->mc_run;
            subrun = mc->mc_subrun;
            gate = mc->mc_nthEvtInFile;
            slice = mc->slice_numbers[0];
        }
        uint64_t evtid = utils.computeEventId(run, subrun, gate, slice);
        uint32_t evtia = utils.computeEventId32a(run, slice);
        uint32_t evtib = utils.computeEventId32b(subrun, gate);
        // std::cout << "i =  " << i << " " <<
        //     " run = " << run << " " <<
        //     " subrun = " << subrun << " " <<
        //     " gate = " << gate << " " <<
        //     " slice = " << slice << " " << std::endl;
        std::string s_evtid = std::to_string(evtid);
        std::size_t str_hash = std::hash<std::string>{}(s_evtid);
        float train_valid_test_score = 1.0 * str_hash / std::numeric_limits<size_t>::max();
        std::cout << "eventid (int) = " << evtid << "; (str) = " << s_evtid << std::endl;
        std::cout << "   hash = " << str_hash << std::endl;
        std::cout << "   hash = " << train_valid_test_score << std::endl;

        std::vector<int> pdgs;
        std::vector<double> energies;
        uint32_t n_protons = 0;
        uint32_t n_neutrons = 0;
        uint32_t n_chgdpions = 0;
        uint32_t n_neutpions = 0;
        uint32_t n_chgdkaons = 0;
        uint32_t n_others = 0;
        uint32_t n_hadmultmeas = 0;
        float esum_protons = 0.0;
        float esum_neutrons = 0.0;
        float esum_chgdpions = 0.0;
        float esum_neutpions = 0.0;
        float esum_chgdkaons = 0.0;
        float esum_others = 0.0;
        float esum_hadmultmeas = 0.0;
        utils.getFSParticles(mc, pdgs, energies);
        for (std::vector<int>::size_type i = 0; i != pdgs.size(); ++i) {
            int pdg_i = pdgs[i];
            int abs_pdg_i = pdg_i < 0 ? -1 * pdg_i : pdg_i;
            double ke_i = energies[i];
            if (is_neutrino(abs_pdg_i)) continue;
            if (pdg_i == PDG_PROTON && ke_i > 50.0) {
                n_protons += 1;
                esum_protons += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if (pdg_i == PDG_NEUTRON && ke_i > 50.0) {
                n_neutrons += 1;
                esum_neutrons += ke_i;
            }
            else if (abs_pdg_i == PDG_PIPLUS && ke_i > 50.0) {
                n_chgdpions += 1;
                esum_chgdpions += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if (pdg_i == PDG_PIZERO && ke_i > 50.0) {
                n_neutpions += 1;
                esum_neutpions += ke_i;
            }
            else if (abs_pdg_i == PDG_KPLUS && ke_i > 50.0) {
                n_chgdkaons += 1;
                esum_chgdkaons += ke_i;
                n_hadmultmeas += 1;
                esum_hadmultmeas += ke_i;
            }
            else if ((abs_pdg_i == PDG_ELECTRON) || (abs_pdg_i == PDG_MUON) || (abs_pdg_i == PDG_TAU)) {
               continue;
            } 
            else {
                n_others += 1;
                esum_others += ke_i;
            }
        }

        // now, append time data to the end of the energy vectors
        xs_1d.insert(xs_1d.end(), xs_1d_t.begin(), xs_1d_t.end());
        us_1d.insert(us_1d.end(), us_1d_t.begin(), us_1d_t.end());
        vs_1d.insert(vs_1d.end(), vs_1d_t.begin(), vs_1d_t.end());

        if (train_valid_test_score < train_threshold) {
            eventdat_train.insert(evtid, evtia, evtib);
            imgdat_train.insert(xs_1d.data(), us_1d.data(), vs_1d.data());
            if (!is_data) {
                vtxdat_train.insert(true_z);
                gendat_train.insert(sig_type, current, int_type, targetZ, E, leptE, W, x_bj, y_bj, Q2);
                hadrodat_train.insert(
                        n_protons, n_neutrons, n_chgdpions,
                        n_neutpions, n_chgdkaons, n_others, n_hadmultmeas,
                        esum_protons, esum_neutrons, esum_chgdpions,
                        esum_neutpions, esum_chgdkaons, esum_others, esum_hadmultmeas
                        );
            }
        }
        else if (train_valid_test_score < valid_test_threshold) {
            eventdat_valid.insert(evtid, evtia, evtib);
            imgdat_valid.insert(xs_1d.data(), us_1d.data(), vs_1d.data());
            if (!is_data) {
                vtxdat_valid.insert(true_z);
                gendat_valid.insert(sig_type, current, int_type, targetZ, E, leptE, W, x_bj, y_bj, Q2);
                hadrodat_valid.insert(
                        n_protons, n_neutrons, n_chgdpions,
                        n_neutpions, n_chgdkaons, n_others, n_hadmultmeas,
                        esum_protons, esum_neutrons, esum_chgdpions,
                        esum_neutpions, esum_chgdkaons, esum_others, esum_hadmultmeas
                        );
            }
        }
        else {
            eventdat_test.insert(evtid, evtia, evtib);
            imgdat_test.insert(xs_1d.data(), us_1d.data(), vs_1d.data());
            if (!is_data) {
                vtxdat_test.insert(true_z);
                gendat_test.insert(sig_type, current, int_type, targetZ, E, leptE, W, x_bj, y_bj, Q2);
                hadrodat_test.insert(
                        n_protons, n_neutrons, n_chgdpions,
                        n_neutpions, n_chgdkaons, n_others, n_hadmultmeas,
                        esum_protons, esum_neutrons, esum_chgdpions,
                        esum_neutpions, esum_chgdkaons, esum_others, esum_hadmultmeas
                        );
            }
        }

        xs_1d.clear();
        xs_1d_t.clear();
        us_1d.clear();
        us_1d_t.clear();
        vs_1d.clear();
        vs_1d_t.clear();
    } // end for loop over events

    return 0;
} // end Skim

int main( int argc, char *argv[]) try {

    int optind = 1;
    int max_evts = -1;  
    double max_z = 6172.29; // module 31
    std::string filebase = "nukecc_skim_me1Bmc_zsegments";
    std::string ntuple_list_file = "/minerva/data/users/perdue/RecoTracks/files/nukecc_20160825-0829_minerva13Cmc.txt";
    int first_event_number = 0;
    int print_freq = 100;
    bool is_data = false;
    bool norm_to_max = false;
    bool do_low_w_cut = false;
    bool do_high_w_cut = false;
    double w_cut_val_mev = 1000.0;
    double train_threshold = 0.0;
    double valid_test_threshold = 0.0;

    while ((optind < argc) && (argv[optind][0]=='-')) {
        std::string sw = argv[optind];
        if (sw=="--data") {
            is_data = true;
        }
        if (sw=="--mc") {
            is_data = false;
        }
        else if (sw=="-e") {
            optind++;
            first_event_number = atoi(argv[optind]);
        }
        else if (sw=="-f") {
            optind++;
            filebase = argv[optind];
        }
        else if (sw=="-h") {
            do_high_w_cut = true;
        }
        else if (sw=="-l") {
            do_low_w_cut = true;
        }
        else if (sw=="-m") {
            optind++;
            max_evts = atoi(argv[optind]);
        }
        else if (sw=="-p") {
            optind++;
            print_freq = atoi(argv[optind]);
        }
        else if (sw=="-n") {
            optind++;
            ntuple_list_file = argv[optind];
        }
        else if (sw=="-w") {
            optind++;
            w_cut_val_mev = atof(argv[optind]);
        }
        else if (sw=="-x") {
            norm_to_max = true;
        }
        else if (sw=="-z") {
            optind++;
            max_z = atof(argv[optind]);
        }
        else if (sw=="--train-threshold") {
            optind++;
            train_threshold = atof(argv[optind]);
        }
        else if (sw=="--valid-test-threshold") {
            optind++;
            valid_test_threshold = atof(argv[optind]);
        }
        optind++;
    }

    if (do_low_w_cut && do_high_w_cut) {
        std::cout << "cannot be both a low and high W sample simultaneously" << std::endl;
        return 1;
    }

    std::cout << "Producing skim..." << std::endl;
    std::cout << " max_evts = " << max_evts << std::endl;
    std::cout << " true max_z = " << max_z << std::endl;
    std::cout << " file base name = " << filebase << std::endl;
    std::cout << " first evt # = " << first_event_number << std::endl;
    std::cout << " print freq = " << print_freq << std::endl;
    std::cout << " is data = " << is_data << std::endl;
    std::cout << " ntuple list file = " << ntuple_list_file << std::endl;
    std::cout << " norm to max energy = " << norm_to_max << std::endl;
    std::cout << " train threshold = " << train_threshold << std::endl;
    std::cout << " valid-test threshold = " << valid_test_threshold << std::endl;

    int status = Skim(max_evts, max_z, filebase,
            first_event_number, is_data, ntuple_list_file, norm_to_max, do_low_w_cut,
            do_high_w_cut, w_cut_val_mev, print_freq, train_threshold, valid_test_threshold);
    return status;

} catch (std::exception const& ex) {
    std::cerr << ex.what() << '\n';
    return 1;
} catch (...) {
    std::cerr << "Unidentifiable exception caught\n";
    return 1;
}
