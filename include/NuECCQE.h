//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 16 09:51:20 2018 by ROOT version 5.34/36
// from TTree NuECCQE/Tuple created by an AnaTuple managed by AnaTupleManager
//
// found on file: SIM_minerva_00113270_Subruns_0001_NuECCQE_Ana_Tuple_v21r1p1.root
// It contains some modifications to deal with stupid ROOT STL errors and some const values
//////////////////////////////////////////////////////////

#ifndef NuECCQE_h
#define NuECCQE_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
// #include "/grid/fermiapp/minerva/software_releases/lcgcmake/build/lcg_61a/projects/ROOT-5.34.36/src/ROOT/5.34.36/cint/cint/lib/prec_stl/vector"

// Fixed size dimensions of array or collections stored in the TTree if any.

namespace RECOTRACKS_ANA {
    class NuECCQE {
        public :
            TTree          *fChain;   //!pointer to the analyzed TTree or TChain
            Int_t           fCurrent; //!current Tree number in a TChain

            static const size_t MAX_EXTRA_ENERGY_CLUSTERS = 500;
            static const size_t MAX_N_SLICES = 3;
            static const size_t MAX_MICHEL_DIGITS_SIZE = 50;
            static const size_t MAX_MICHEL_DATA_SIZE = 50;
            static const size_t MAX_NON_PROTON_SCORES = 100;
            static const size_t MAX_VERTEX_BLOB_NCLUSTERS = 250;
            static const size_t MAX_EPRONG_NCLUSTERS = 500;
            static const size_t MAX_NPRONGS = 12;
            static const size_t MAX_NFSPART = 100;
            static const size_t MAX_NERPART = 200;
            static const size_t MAX_NU_ANCESTORIDS = 20;

            // Declaration of leaf types
            Double_t        eventID;
            Int_t           physEvtNum;
            Int_t           n_hyps;
            Int_t           processType;
            Int_t           primaryPart;
            Int_t           n_slices;
            Int_t           slice_numbers[MAX_N_SLICES];   //[n_slices]
            Int_t           shared_slice;
            Double_t        vtx[4];
            Double_t        vtxErr[4];
            Double_t        E[4];
            Int_t           reco_vertex_batch;
            Bool_t          found_truth;
            Bool_t          phys_front_activity;
            Bool_t          phys_energy_in_road_upstream_is_rockmuon_consistent;
            Bool_t          rock_muons_removed;
            Bool_t          minos_track_match;
            Bool_t          minos_stub_match;
            Bool_t          unknown_helicity;
            Bool_t          minos_track_inside_partial_plane;
            Bool_t          prim_vtx_has_misassigned_track_direction;
            Bool_t          prim_vtx_has_broken_track;
            Int_t           EMLikeTrackMultiplicity;
            Int_t           ExtraEnergy_nClusters;
            Int_t           HasFiducialVertex;
            Int_t           HasNoBackExitingTracks;
            Int_t           HasNoNonEMExitingTracks;
            Int_t           HasNoNonProtons;
            Int_t           HasNoVertexMismatch;
            Int_t           HasTracks;
            Int_t           NumShortTracks;
            Int_t           NumTracks;
            Int_t           ODMatchProng;
            Int_t           StartPointVertexMultiplicity;
            Int_t           TruePID;
            Int_t           UpstreamInlineNClusters;
            Int_t           UpstreamInlineNDigits;
            Int_t           VertexBlob_nClusters;
            Int_t           VertexTrackMultiplicity;
            Int_t           broken_track_most_us_plane;
            Int_t           eProng_nClusters;
            Int_t           n_indices;
            Int_t           phys_energy_in_road_downstream_nplanes;
            Int_t           phys_energy_in_road_upstream_nplanes;
            Int_t           phys_n_dead_discr_pair;
            Int_t           phys_n_dead_discr_pair_in_prim_track_region;
            Int_t           phys_n_dead_discr_pair_two_mod_downstream_prim_track;
            Int_t           phys_n_dead_discr_pair_two_mod_upstream_prim_vtx;
            Int_t           phys_n_dead_discr_pair_upstream_prim_track_proj;
            Int_t           phys_vertex_is_fiducial;
            Double_t        ConeEnergyVis;
            Double_t        ExtraEnergyVis;
            Double_t        Psi;
            Double_t        TrueEnergy;
            Double_t        TrueTheta;
            Double_t        UpstreamInlineEnergy;
            Double_t        UpstreamInlineEnergyWgtdPosMean;
            Double_t        UpstreamInlineEnergyWgtdPosRMS;
            Double_t        UpstreamODEnergy;
            Double_t        VertexBlobEnergy;
            Double_t        energy_from_mc;
            Double_t        energy_from_mc_fraction;
            Double_t        energy_from_mc_fraction_of_highest;
            Double_t        muon_phi;
            Double_t        muon_theta;
            Double_t        muon_thetaX;
            Double_t        muon_thetaY;
            Double_t        phys_energy_dispersed;
            Double_t        phys_energy_in_road_downstream;
            Double_t        phys_energy_in_road_upstream;
            Double_t        phys_energy_unattached;
            Double_t        prim_vtx_smallest_opening_angle;
            Int_t           latticeEnergyIndices[23876];   //[n_indices]
            Int_t           michel_digits_sz;
            Int_t           michel_digits[MAX_MICHEL_DIGITS_SIZE];   //[michel_digits_sz]
            Double_t        ExtraEnergy[4];
            Double_t        ExtraEnergyClusters_X[MAX_EXTRA_ENERGY_CLUSTERS];   //[ExtraEnergy_nClusters]
            Double_t        ExtraEnergyClusters_Y[MAX_EXTRA_ENERGY_CLUSTERS];   //[ExtraEnergy_nClusters]
            Double_t        ExtraEnergyClusters_Z[MAX_EXTRA_ENERGY_CLUSTERS];   //[ExtraEnergy_nClusters]
            Double_t        ExtraEnergyClusters_energy[MAX_EXTRA_ENERGY_CLUSTERS];   //[ExtraEnergy_nClusters]
            Double_t        ExtraEnergyClusters_nDigits[MAX_EXTRA_ENERGY_CLUSTERS];   //[ExtraEnergy_nClusters]
            Double_t        ExtraEnergyClusters_width[MAX_EXTRA_ENERGY_CLUSTERS];   //[ExtraEnergy_nClusters]
            Int_t           NonProtonScores_sz;
            Double_t        NonProtonScores[MAX_NON_PROTON_SCORES];   //[NonProtonScores_sz]
            Double_t        VertexBlobClusters_X[MAX_VERTEX_BLOB_NCLUSTERS];   //[VertexBlob_nClusters]
            Double_t        VertexBlobClusters_Y[MAX_VERTEX_BLOB_NCLUSTERS];   //[VertexBlob_nClusters]
            Double_t        VertexBlobClusters_Z[MAX_VERTEX_BLOB_NCLUSTERS];   //[VertexBlob_nClusters]
            Double_t        VertexBlobClusters_energy[MAX_VERTEX_BLOB_NCLUSTERS];   //[VertexBlob_nClusters]
            Double_t        VertexBlobClusters_nDigits[MAX_VERTEX_BLOB_NCLUSTERS];   //[VertexBlob_nClusters]
            Double_t        VertexBlobClusters_width[MAX_VERTEX_BLOB_NCLUSTERS];   //[VertexBlob_nClusters]
            Double_t        VertexEnergy[4];
            Double_t        eProngClusters_X[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_Y[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_Z[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_axis_projection[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_cal_energy[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_energy[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_nDigits[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        eProngClusters_width[MAX_EPRONG_NCLUSTERS];   //[eProng_nClusters]
            Double_t        latticeNormEnergySums[23876];   //[n_indices]
            Double_t        latticeRelativeTimes[23876];   //[n_indices]
            Int_t           michel_energy_sz;
            Double_t        michel_energy[MAX_MICHEL_DATA_SIZE];   //[michel_energy_sz]
            Int_t           michel_first_hit_fraction_sz;
            Double_t        michel_first_hit_fraction[MAX_MICHEL_DATA_SIZE];   //[michel_first_hit_fraction_sz]
            Int_t           michel_slice_energy_sz;
            Double_t        michel_slice_energy[MAX_MICHEL_DATA_SIZE];   //[michel_slice_energy_sz]
            Int_t           michel_z_extent_sz;
            Double_t        michel_z_extent[MAX_MICHEL_DATA_SIZE];   //[michel_z_extent_sz]
            Int_t           n_prongs;
            Int_t           prong_nParticles[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_GEANTTrackNum[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_HasTruth[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_SeedTrackType[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_TruePID[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_binned_energy_nbins[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_n_frontdEdX_planes_sampled[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_n_tracks[MAX_NPRONGS];   //[n_prongs]
            Int_t           prong_vertexMoved[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_BackMiddleRatio[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_BeginsInTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_CalCorrectedEnergy[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_DataFrac[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_ECALVisE[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_EWgtdLengthByEnergy[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_EWgtdProngLength[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_FirstFireFraction[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_FracProngFromBestTrueTraj[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_HCALVisE[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_HCALVisEnergy[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_LocalShowerWidth[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_LongitudinalBunchGapScore[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_MedianPlaneShowerWidth[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_NoHCALActivity[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_NoODActivity[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_NonMIPClusFrac[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_ODVisE[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_ProngLength[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_SeedTrackChi2[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_ShowerEnergySeparation[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_ShowerLengthEnergyScale[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_SideECALVisE[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TotalVisE[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseGapScore[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseShowerAsymmetryDenominatorU[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseShowerAsymmetryDenominatorV[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseShowerAsymmetryDenominatorX[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseShowerAsymmetryNumeratorU[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseShowerAsymmetryNumeratorV[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TransverseShowerAsymmetryNumeratorX[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TrimmedCaloEnergy[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TrimmedVisE[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TrueEnergy[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TrueFrontdEdX[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TrueTheta[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_TrueTrajFracInProng[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_VertexResidualR[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_VertexResidualX[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_VertexResidualY[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_VertexResidualZ[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMaxECAL[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMaxTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMean[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMeanFrontNumBinsTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMeanFrontPositionTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMeanFrontTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMedianECAL[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMedianFrontTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_dEdXMedianTracker[MAX_NPRONGS];   //[n_prongs]
            Double_t        prong_projection_bin_width[MAX_NPRONGS];   //[n_prongs]
            std::vector<std::vector<double> > *prong_axis_vector;
            std::vector<std::vector<double> > *prong_axis_vertex;
            std::vector<std::vector<double> > *prong_binned_energy_bin_contents;
            std::vector<std::vector<double> > *prong_binned_energy_bin_indices;
            Bool_t          truth_pass_NuECCQE;
            Bool_t          truth_has_physics_event;
            Int_t           truth_IsFiducial;
            Double_t        truth_Enu_QE;
            Double_t        truth_Q2_QE;
            Double_t        truth_electron_theta_wrtbeam;
            Int_t           genie_wgt_n_shifts;
            Double_t        truth_genie_wgt_AGKYxF1pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_AhtBY[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_BhtBY[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_CCQEPauliSupViaKF[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_CV1uBY[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_CV2uBY[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_EtaNCEL[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrAbs_N[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrAbs_pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrCEx_N[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrCEx_pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrElas_N[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrElas_pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrInel_N[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrInel_pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrPiProd_N[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_FrPiProd_pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MFP_N[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MFP_pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaCCQE[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaCCQEshape[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaNCEL[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MaRES[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_MvRES[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormCCQE[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormCCRES[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormDISCC[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_NormNCRES[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_RDecBR1gamma[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvn1pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvn2pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvp1pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Rvp2pi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_Theta_Delta2Npi[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_VecFFCCQEshape[7];   //[genie_wgt_n_shifts]
            Double_t        truth_genie_wgt_shifts[7];   //[genie_wgt_n_shifts]
            Int_t           NuECCQE_nuFlavor;
            Int_t           NuECCQE_nuHelicity;
            Int_t           NuECCQE_intCurrent;
            Int_t           NuECCQE_intType;
            Double_t        NuECCQE_E;
            Double_t        NuECCQE_Q2;
            Double_t        NuECCQE_x;
            Double_t        NuECCQE_y;
            Double_t        NuECCQE_W;
            Double_t        NuECCQE_score;
            Double_t        NuECCQE_leptonE[4];
            Double_t        NuECCQE_vtx[4];
            Int_t           ev_run;
            Int_t           ev_subrun;
            Int_t           ev_detector;
            Int_t           ev_triggerType;
            Int_t           ev_gate;
            Int_t           ev_global_gate;
            Int_t           ev_gps_time_sec;
            Int_t           ev_gps_time_usec;
            Double_t        numi_pot;
            Double_t        numi_horn_curr;
            Double_t        numi_x_pos;
            Double_t        numi_y_pos;
            Double_t        numi_x_width;
            Double_t        numi_y_width;
            Double_t        numi_bpm1;
            Double_t        numi_bpm2;
            Double_t        numi_bpm3;
            Double_t        numi_bpm4;
            Double_t        numi_bpm5;
            Double_t        numi_bpm6;
            Double_t        numi_tor101;
            Double_t        numi_tr101d;
            Double_t        numi_tortgt;
            Double_t        numi_trtgtd;
            Int_t           batch_structure;
            Int_t           numi_minos_time_sec;
            Int_t           numi_minos_time_nsec;
            Int_t           numi_database_sec;
            Int_t           numi_database_nsec;
            Int_t           numi_is_good_beam_spill;
            Int_t           numi_is_bad_pot_data_spill;
            Int_t           numi_is_no_beam_spill;
            Int_t           numi_is_bad_data_spill;
            Int_t           numi_is_bad_profile_x_width_data;
            Int_t           numi_is_bad_profile_y_width_data;
            Int_t           numi_is_bad_x_position_data;
            Int_t           numi_is_bad_y_position_data;
            Int_t           numi_is_bad_horn_curr_data;
            Int_t           numi_is_bad_nearest_time_spill;
            Int_t           numi_is_bad_beam_spill;
            Int_t           numi_is_bad_pot_spill;
            Int_t           numi_is_bad_x_pos;
            Int_t           numi_is_bad_y_pos;
            Int_t           numi_is_bad_beam_size;
            Int_t           numi_is_bad_profile_width_x;
            Int_t           numi_is_bad_profile_width_y;
            Int_t           numi_is_bad_horn_curr;
            Int_t           numi_is_target_out_spill;
            Int_t           numi_is_bad_beam_type_spill;
            Int_t           numi_is_bad_beam_frac_on_tgt_spill;
            Int_t           numi_is_good_position;
            Int_t           numi_is_good_width;
            Int_t           numi_is_good_toroids;
            Int_t           numi_is_good_delta_t;
            Int_t           numi_is_good_horn;
            Double_t        numi_time_to_nearest;
            Int_t           mc_run;
            Int_t           mc_subrun;
            Int_t           mc_nInteractions;
            Int_t           mc_MIState;
            Double_t        mc_pot;
            Int_t           mc_beamConfig;
            Int_t           mc_processType;
            Int_t           mc_nthEvtInSpill;
            Int_t           mc_nthEvtInFile;
            Int_t           mc_intType;
            Int_t           mc_current;
            Int_t           mc_charm;
            Double_t        mc_weight;
            Double_t        mc_XSec;
            Double_t        mc_diffXSec;
            Int_t           mc_incoming;
            Double_t        mc_fluxDriverProb;
            Int_t           mc_targetNucleus;
            Int_t           mc_targetZ;
            Int_t           mc_targetA;
            Int_t           mc_targetNucleon;
            Int_t           mc_struckQuark;
            Int_t           mc_seaQuark;
            Int_t           mc_resID;
            Int_t           mc_primaryLepton;
            Double_t        mc_incomingE;
            Double_t        mc_Bjorkenx;
            Double_t        mc_Bjorkeny;
            Double_t        mc_Q2;
            Double_t        mc_nuT;
            Double_t        mc_w;
            Double_t        mc_vtx[4];
            Double_t        mc_incomingPartVec[4];
            Double_t        mc_initNucVec[4];
            Double_t        mc_primFSLepton[4];
            Int_t           mc_nFSPart;
            Double_t        mc_FSPartPx[MAX_NFSPART];   //[mc_nFSPart]
            Double_t        mc_FSPartPy[MAX_NFSPART];   //[mc_nFSPart]
            Double_t        mc_FSPartPz[MAX_NFSPART];   //[mc_nFSPart]
            Double_t        mc_FSPartE[MAX_NFSPART];   //[mc_nFSPart]
            Int_t           mc_FSPartPDG[MAX_NFSPART];   //[mc_nFSPart]
            Int_t           mc_er_nPart;
            Int_t           mc_er_ID[MAX_NERPART];   //[mc_er_nPart]
            Int_t           mc_er_status[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_posInNucX[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_posInNucY[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_posInNucZ[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_Px[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_Py[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_Pz[MAX_NERPART];   //[mc_er_nPart]
            Double_t        mc_er_E[MAX_NERPART];   //[mc_er_nPart]
            Int_t           mc_er_FD[MAX_NERPART];   //[mc_er_nPart]
            Int_t           mc_er_LD[MAX_NERPART];   //[mc_er_nPart]
            Int_t           mc_er_mother[MAX_NERPART];   //[mc_er_nPart]
            Int_t           mc_fr_nNuAncestorIDs;
            Int_t           mc_fr_nuAncestorIDs[MAX_NU_ANCESTORIDS];   //[mc_fr_nNuAncestorIDs]
            Int_t           mc_fr_nuParentID;
            Int_t           mc_fr_decMode;
            Double_t        mc_fr_primProtonVtx[3];
            Double_t        mc_fr_primProtonP[4];
            Double_t        mc_fr_nuParentDecVtx[3];
            Double_t        mc_fr_nuParentProdVtx[3];
            Double_t        mc_fr_nuParentProdP[4];
            Double_t        mc_cvweight_total;
            Double_t        wgt;
            Double_t        mc_cvweight_totalFlux;
            Double_t        mc_cvweight_totalXsec;
            Double_t        mc_ppfx1_cvweight;
            Double_t        mc_hornCurrent_cvweight;
            Double_t        mc_gen1_cvweight_total;
            Double_t        gen1_wgt;
            Double_t        mc_gen1_cvweight_totalFlux;
            Double_t        mc_gen1_cvweight_NA49;
            Int_t           mc_wgt_Flux_BeamFocus_sz;
            Double_t        mc_wgt_Flux_BeamFocus[1];   //[mc_wgt_Flux_BeamFocus_sz]
            Int_t           mc_wgt_gen1_Flux_Tertiary_sz;
            Double_t        mc_wgt_gen1_Flux_Tertiary[1];   //[mc_wgt_gen1_Flux_Tertiary_sz]
            Int_t           mc_wgt_gen1_Flux_NA49_sz;
            Double_t        mc_wgt_gen1_Flux_NA49[1];   //[mc_wgt_gen1_Flux_NA49_sz]
            Int_t           mc_wgt_Norm_sz;
            Double_t        mc_wgt_Norm[1];   //[mc_wgt_Norm_sz]
            Int_t           mc_wgt_ppfx1_Total_sz;
            Double_t        mc_wgt_ppfx1_Total[1];   //[mc_wgt_ppfx1_Total_sz]
            Int_t           mc_vertex_batch;
            Double_t        prong_part_score[1];   //[n_prongs]
            Double_t        prong_part_mass[1];   //[n_prongs]
            Int_t           prong_part_charge[1];   //[n_prongs]
            Int_t           prong_part_pid[1];   //[n_prongs]
            std::vector<std::vector<double> > *prong_part_E;
            std::vector<std::vector<double> > *prong_part_pos;

            // List of branches
            TBranch        *b_eventID;   //!
            TBranch        *b_physEvtNum;   //!
            TBranch        *b_n_hyps;   //!
            TBranch        *b_processType;   //!
            TBranch        *b_primaryPart;   //!
            TBranch        *b_n_slices;   //!
            TBranch        *b_slice_numbers;   //!
            TBranch        *b_shared_slice;   //!
            TBranch        *b_vtx;   //!
            TBranch        *b_vtxErr;   //!
            TBranch        *b_E;   //!
            TBranch        *b_reco_vertex_batch;   //!
            TBranch        *b_found_truth;   //!
            TBranch        *b_phys_front_activity;   //!
            TBranch        *b_phys_energy_in_road_upstream_is_rockmuon_consistent;   //!
            TBranch        *b_rock_muons_removed;   //!
            TBranch        *b_minos_track_match;   //!
            TBranch        *b_minos_stub_match;   //!
            TBranch        *b_unknown_helicity;   //!
            TBranch        *b_minos_track_inside_partial_plane;   //!
            TBranch        *b_prim_vtx_has_misassigned_track_direction;   //!
            TBranch        *b_prim_vtx_has_broken_track;   //!
            TBranch        *b_EMLikeTrackMultiplicity;   //!
            TBranch        *b_ExtraEnergy_nClusters;   //!
            TBranch        *b_HasFiducialVertex;   //!
            TBranch        *b_HasNoBackExitingTracks;   //!
            TBranch        *b_HasNoNonEMExitingTracks;   //!
            TBranch        *b_HasNoNonProtons;   //!
            TBranch        *b_HasNoVertexMismatch;   //!
            TBranch        *b_HasTracks;   //!
            TBranch        *b_NumShortTracks;   //!
            TBranch        *b_NumTracks;   //!
            TBranch        *b_ODMatchProng;   //!
            TBranch        *b_StartPointVertexMultiplicity;   //!
            TBranch        *b_TruePID;   //!
            TBranch        *b_UpstreamInlineNClusters;   //!
            TBranch        *b_UpstreamInlineNDigits;   //!
            TBranch        *b_VertexBlob_nClusters;   //!
            TBranch        *b_VertexTrackMultiplicity;   //!
            TBranch        *b_broken_track_most_us_plane;   //!
            TBranch        *b_eProng_nClusters;   //!
            TBranch        *b_n_indices;   //!
            TBranch        *b_phys_energy_in_road_downstream_nplanes;   //!
            TBranch        *b_phys_energy_in_road_upstream_nplanes;   //!
            TBranch        *b_phys_n_dead_discr_pair;   //!
            TBranch        *b_phys_n_dead_discr_pair_in_prim_track_region;   //!
            TBranch        *b_phys_n_dead_discr_pair_two_mod_downstream_prim_track;   //!
            TBranch        *b_phys_n_dead_discr_pair_two_mod_upstream_prim_vtx;   //!
            TBranch        *b_phys_n_dead_discr_pair_upstream_prim_track_proj;   //!
            TBranch        *b_phys_vertex_is_fiducial;   //!
            TBranch        *b_ConeEnergyVis;   //!
            TBranch        *b_ExtraEnergyVis;   //!
            TBranch        *b_Psi;   //!
            TBranch        *b_TrueEnergy;   //!
            TBranch        *b_TrueTheta;   //!
            TBranch        *b_UpstreamInlineEnergy;   //!
            TBranch        *b_UpstreamInlineEnergyWgtdPosMean;   //!
            TBranch        *b_UpstreamInlineEnergyWgtdPosRMS;   //!
            TBranch        *b_UpstreamODEnergy;   //!
            TBranch        *b_VertexBlobEnergy;   //!
            TBranch        *b_energy_from_mc;   //!
            TBranch        *b_energy_from_mc_fraction;   //!
            TBranch        *b_energy_from_mc_fraction_of_highest;   //!
            TBranch        *b_muon_phi;   //!
            TBranch        *b_muon_theta;   //!
            TBranch        *b_muon_thetaX;   //!
            TBranch        *b_muon_thetaY;   //!
            TBranch        *b_phys_energy_dispersed;   //!
            TBranch        *b_phys_energy_in_road_downstream;   //!
            TBranch        *b_phys_energy_in_road_upstream;   //!
            TBranch        *b_phys_energy_unattached;   //!
            TBranch        *b_prim_vtx_smallest_opening_angle;   //!
            TBranch        *b_latticeEnergyIndices;   //!
            TBranch        *b_michel_digits_sz;   //!
            TBranch        *b_michel_digits;   //!
            TBranch        *b_ExtraEnergy;   //!
            TBranch        *b_ExtraEnergyClusters_X;   //!
            TBranch        *b_ExtraEnergyClusters_Y;   //!
            TBranch        *b_ExtraEnergyClusters_Z;   //!
            TBranch        *b_ExtraEnergyClusters_energy;   //!
            TBranch        *b_ExtraEnergyClusters_nDigits;   //!
            TBranch        *b_ExtraEnergyClusters_width;   //!
            TBranch        *b_NonProtonScores_sz;   //!
            TBranch        *b_NonProtonScores;   //!
            TBranch        *b_VertexBlobClusters_X;   //!
            TBranch        *b_VertexBlobClusters_Y;   //!
            TBranch        *b_VertexBlobClusters_Z;   //!
            TBranch        *b_VertexBlobClusters_energy;   //!
            TBranch        *b_VertexBlobClusters_nDigits;   //!
            TBranch        *b_VertexBlobClusters_width;   //!
            TBranch        *b_VertexEnergy;   //!
            TBranch        *b_eProngClusters_X;   //!
            TBranch        *b_eProngClusters_Y;   //!
            TBranch        *b_eProngClusters_Z;   //!
            TBranch        *b_eProngClusters_axis_projection;   //!
            TBranch        *b_eProngClusters_cal_energy;   //!
            TBranch        *b_eProngClusters_energy;   //!
            TBranch        *b_eProngClusters_nDigits;   //!
            TBranch        *b_eProngClusters_width;   //!
            TBranch        *b_latticeNormEnergySums;   //!
            TBranch        *b_latticeRelativeTimes;   //!
            TBranch        *b_michel_energy_sz;   //!
            TBranch        *b_michel_energy;   //!
            TBranch        *b_michel_first_hit_fraction_sz;   //!
            TBranch        *b_michel_first_hit_fraction;   //!
            TBranch        *b_michel_slice_energy_sz;   //!
            TBranch        *b_michel_slice_energy;   //!
            TBranch        *b_michel_z_extent_sz;   //!
            TBranch        *b_michel_z_extent;   //!
            TBranch        *b_n_prongs;   //!
            TBranch        *b_prong_nParticles;   //!
            TBranch        *b_prong_GEANTTrackNum;   //!
            TBranch        *b_prong_HasTruth;   //!
            TBranch        *b_prong_SeedTrackType;   //!
            TBranch        *b_prong_TruePID;   //!
            TBranch        *b_prong_binned_energy_nbins;   //!
            TBranch        *b_prong_n_frontdEdX_planes_sampled;   //!
            TBranch        *b_prong_n_tracks;   //!
            TBranch        *b_prong_vertexMoved;   //!
            TBranch        *b_prong_BackMiddleRatio;   //!
            TBranch        *b_prong_BeginsInTracker;   //!
            TBranch        *b_prong_CalCorrectedEnergy;   //!
            TBranch        *b_prong_DataFrac;   //!
            TBranch        *b_prong_ECALVisE;   //!
            TBranch        *b_prong_EWgtdLengthByEnergy;   //!
            TBranch        *b_prong_EWgtdProngLength;   //!
            TBranch        *b_prong_FirstFireFraction;   //!
            TBranch        *b_prong_FracProngFromBestTrueTraj;   //!
            TBranch        *b_prong_HCALVisE;   //!
            TBranch        *b_prong_HCALVisEnergy;   //!
            TBranch        *b_prong_LocalShowerWidth;   //!
            TBranch        *b_prong_LongitudinalBunchGapScore;   //!
            TBranch        *b_prong_MedianPlaneShowerWidth;   //!
            TBranch        *b_prong_NoHCALActivity;   //!
            TBranch        *b_prong_NoODActivity;   //!
            TBranch        *b_prong_NonMIPClusFrac;   //!
            TBranch        *b_prong_ODVisE;   //!
            TBranch        *b_prong_ProngLength;   //!
            TBranch        *b_prong_SeedTrackChi2;   //!
            TBranch        *b_prong_ShowerEnergySeparation;   //!
            TBranch        *b_prong_ShowerLengthEnergyScale;   //!
            TBranch        *b_prong_SideECALVisE;   //!
            TBranch        *b_prong_TotalVisE;   //!
            TBranch        *b_prong_TransverseGapScore;   //!
            TBranch        *b_prong_TransverseShowerAsymmetryDenominatorU;   //!
            TBranch        *b_prong_TransverseShowerAsymmetryDenominatorV;   //!
            TBranch        *b_prong_TransverseShowerAsymmetryDenominatorX;   //!
            TBranch        *b_prong_TransverseShowerAsymmetryNumeratorU;   //!
            TBranch        *b_prong_TransverseShowerAsymmetryNumeratorV;   //!
            TBranch        *b_prong_TransverseShowerAsymmetryNumeratorX;   //!
            TBranch        *b_prong_TrimmedCaloEnergy;   //!
            TBranch        *b_prong_TrimmedVisE;   //!
            TBranch        *b_prong_TrueEnergy;   //!
            TBranch        *b_prong_TrueFrontdEdX;   //!
            TBranch        *b_prong_TrueTheta;   //!
            TBranch        *b_prong_TrueTrajFracInProng;   //!
            TBranch        *b_prong_VertexResidualR;   //!
            TBranch        *b_prong_VertexResidualX;   //!
            TBranch        *b_prong_VertexResidualY;   //!
            TBranch        *b_prong_VertexResidualZ;   //!
            TBranch        *b_prong_dEdXMaxECAL;   //!
            TBranch        *b_prong_dEdXMaxTracker;   //!
            TBranch        *b_prong_dEdXMean;   //!
            TBranch        *b_prong_dEdXMeanFrontNumBinsTracker;   //!
            TBranch        *b_prong_dEdXMeanFrontPositionTracker;   //!
            TBranch        *b_prong_dEdXMeanFrontTracker;   //!
            TBranch        *b_prong_dEdXMedianECAL;   //!
            TBranch        *b_prong_dEdXMedianFrontTracker;   //!
            TBranch        *b_prong_dEdXMedianTracker;   //!
            TBranch        *b_prong_projection_bin_width;   //!
            TBranch        *b_prong_axis_vector;   //!
            TBranch        *b_prong_axis_vertex;   //!
            TBranch        *b_prong_binned_energy_bin_contents;   //!
            TBranch        *b_prong_binned_energy_bin_indices;   //!
            TBranch        *b_truth_pass_NuECCQE;   //!
            TBranch        *b_truth_has_physics_event;   //!
            TBranch        *b_truth_IsFiducial;   //!
            TBranch        *b_truth_Enu_QE;   //!
            TBranch        *b_truth_Q2_QE;   //!
            TBranch        *b_truth_electron_theta_wrtbeam;   //!
            TBranch        *b_genie_wgt_n_shifts;   //!
            TBranch        *b_truth_genie_wgt_AGKYxF1pi;   //!
            TBranch        *b_truth_genie_wgt_AhtBY;   //!
            TBranch        *b_truth_genie_wgt_BhtBY;   //!
            TBranch        *b_truth_genie_wgt_CCQEPauliSupViaKF;   //!
            TBranch        *b_truth_genie_wgt_CV1uBY;   //!
            TBranch        *b_truth_genie_wgt_CV2uBY;   //!
            TBranch        *b_truth_genie_wgt_EtaNCEL;   //!
            TBranch        *b_truth_genie_wgt_FrAbs_N;   //!
            TBranch        *b_truth_genie_wgt_FrAbs_pi;   //!
            TBranch        *b_truth_genie_wgt_FrCEx_N;   //!
            TBranch        *b_truth_genie_wgt_FrCEx_pi;   //!
            TBranch        *b_truth_genie_wgt_FrElas_N;   //!
            TBranch        *b_truth_genie_wgt_FrElas_pi;   //!
            TBranch        *b_truth_genie_wgt_FrInel_N;   //!
            TBranch        *b_truth_genie_wgt_FrInel_pi;   //!
            TBranch        *b_truth_genie_wgt_FrPiProd_N;   //!
            TBranch        *b_truth_genie_wgt_FrPiProd_pi;   //!
            TBranch        *b_truth_genie_wgt_MFP_N;   //!
            TBranch        *b_truth_genie_wgt_MFP_pi;   //!
            TBranch        *b_truth_genie_wgt_MaCCQE;   //!
            TBranch        *b_truth_genie_wgt_MaCCQEshape;   //!
            TBranch        *b_truth_genie_wgt_MaNCEL;   //!
            TBranch        *b_truth_genie_wgt_MaRES;   //!
            TBranch        *b_truth_genie_wgt_MvRES;   //!
            TBranch        *b_truth_genie_wgt_NormCCQE;   //!
            TBranch        *b_truth_genie_wgt_NormCCRES;   //!
            TBranch        *b_truth_genie_wgt_NormDISCC;   //!
            TBranch        *b_truth_genie_wgt_NormNCRES;   //!
            TBranch        *b_truth_genie_wgt_RDecBR1gamma;   //!
            TBranch        *b_truth_genie_wgt_Rvn1pi;   //!
            TBranch        *b_truth_genie_wgt_Rvn2pi;   //!
            TBranch        *b_truth_genie_wgt_Rvp1pi;   //!
            TBranch        *b_truth_genie_wgt_Rvp2pi;   //!
            TBranch        *b_truth_genie_wgt_Theta_Delta2Npi;   //!
            TBranch        *b_truth_genie_wgt_VecFFCCQEshape;   //!
            TBranch        *b_truth_genie_wgt_shifts;   //!
            TBranch        *b_NuECCQE_nuFlavor;   //!
            TBranch        *b_NuECCQE_nuHelicity;   //!
            TBranch        *b_NuECCQE_intCurrent;   //!
            TBranch        *b_NuECCQE_intType;   //!
            TBranch        *b_NuECCQE_E;   //!
            TBranch        *b_NuECCQE_Q2;   //!
            TBranch        *b_NuECCQE_x;   //!
            TBranch        *b_NuECCQE_y;   //!
            TBranch        *b_NuECCQE_W;   //!
            TBranch        *b_NuECCQE_score;   //!
            TBranch        *b_NuECCQE_leptonE;   //!
            TBranch        *b_NuECCQE_vtx;   //!
            TBranch        *b_ev_run;   //!
            TBranch        *b_ev_subrun;   //!
            TBranch        *b_ev_detector;   //!
            TBranch        *b_ev_triggerType;   //!
            TBranch        *b_ev_gate;   //!
            TBranch        *b_ev_global_gate;   //!
            TBranch        *b_ev_gps_time_sec;   //!
            TBranch        *b_ev_gps_time_usec;   //!
            TBranch        *b_numi_pot;   //!
            TBranch        *b_numi_horn_curr;   //!
            TBranch        *b_numi_x_pos;   //!
            TBranch        *b_numi_y_pos;   //!
            TBranch        *b_numi_x_width;   //!
            TBranch        *b_numi_y_width;   //!
            TBranch        *b_numi_bpm1;   //!
            TBranch        *b_numi_bpm2;   //!
            TBranch        *b_numi_bpm3;   //!
            TBranch        *b_numi_bpm4;   //!
            TBranch        *b_numi_bpm5;   //!
            TBranch        *b_numi_bpm6;   //!
            TBranch        *b_numi_tor101;   //!
            TBranch        *b_numi_tr101d;   //!
            TBranch        *b_numi_tortgt;   //!
            TBranch        *b_numi_trtgtd;   //!
            TBranch        *b_batch_structure;   //!
            TBranch        *b_numi_minos_time_sec;   //!
            TBranch        *b_numi_minos_time_nsec;   //!
            TBranch        *b_numi_database_sec;   //!
            TBranch        *b_numi_database_nsec;   //!
            TBranch        *b_numi_is_good_beam_spill;   //!
            TBranch        *b_numi_is_bad_pot_data_spill;   //!
            TBranch        *b_numi_is_no_beam_spill;   //!
            TBranch        *b_numi_is_bad_data_spill;   //!
            TBranch        *b_numi_is_bad_profile_x_width_data;   //!
            TBranch        *b_numi_is_bad_profile_y_width_data;   //!
            TBranch        *b_numi_is_bad_x_position_data;   //!
            TBranch        *b_numi_is_bad_y_position_data;   //!
            TBranch        *b_numi_is_bad_horn_curr_data;   //!
            TBranch        *b_numi_is_bad_nearest_time_spill;   //!
            TBranch        *b_numi_is_bad_beam_spill;   //!
            TBranch        *b_numi_is_bad_pot_spill;   //!
            TBranch        *b_numi_is_bad_x_pos;   //!
            TBranch        *b_numi_is_bad_y_pos;   //!
            TBranch        *b_numi_is_bad_beam_size;   //!
            TBranch        *b_numi_is_bad_profile_width_x;   //!
            TBranch        *b_numi_is_bad_profile_width_y;   //!
            TBranch        *b_numi_is_bad_horn_curr;   //!
            TBranch        *b_numi_is_target_out_spill;   //!
            TBranch        *b_numi_is_bad_beam_type_spill;   //!
            TBranch        *b_numi_is_bad_beam_frac_on_tgt_spill;   //!
            TBranch        *b_numi_is_good_position;   //!
            TBranch        *b_numi_is_good_width;   //!
            TBranch        *b_numi_is_good_toroids;   //!
            TBranch        *b_numi_is_good_delta_t;   //!
            TBranch        *b_numi_is_good_horn;   //!
            TBranch        *b_numi_time_to_nearest;   //!
            TBranch        *b_mc_run;   //!
            TBranch        *b_mc_subrun;   //!
            TBranch        *b_mc_nInteractions;   //!
            TBranch        *b_mc_MIState;   //!
            TBranch        *b_mc_pot;   //!
            TBranch        *b_mc_beamConfig;   //!
            TBranch        *b_mc_processType;   //!
            TBranch        *b_mc_nthEvtInSpill;   //!
            TBranch        *b_mc_nthEvtInFile;   //!
            TBranch        *b_mc_intType;   //!
            TBranch        *b_mc_current;   //!
            TBranch        *b_mc_charm;   //!
            TBranch        *b_mc_weight;   //!
            TBranch        *b_mc_XSec;   //!
            TBranch        *b_mc_diffXSec;   //!
            TBranch        *b_mc_incoming;   //!
            TBranch        *b_mc_fluxDriverProb;   //!
            TBranch        *b_mc_targetNucleus;   //!
            TBranch        *b_mc_targetZ;   //!
            TBranch        *b_mc_targetA;   //!
            TBranch        *b_mc_targetNucleon;   //!
            TBranch        *b_mc_struckQuark;   //!
            TBranch        *b_mc_seaQuark;   //!
            TBranch        *b_mc_resID;   //!
            TBranch        *b_mc_primaryLepton;   //!
            TBranch        *b_mc_incomingE;   //!
            TBranch        *b_mc_Bjorkenx;   //!
            TBranch        *b_mc_Bjorkeny;   //!
            TBranch        *b_mc_Q2;   //!
            TBranch        *b_mc_nuT;   //!
            TBranch        *b_mc_w;   //!
            TBranch        *b_mc_vtx;   //!
            TBranch        *b_mc_incomingPartVec;   //!
            TBranch        *b_mc_initNucVec;   //!
            TBranch        *b_mc_primFSLepton;   //!
            TBranch        *b_mc_nFSPart;   //!
            TBranch        *b_mc_FSPartPx;   //!
            TBranch        *b_mc_FSPartPy;   //!
            TBranch        *b_mc_FSPartPz;   //!
            TBranch        *b_mc_FSPartE;   //!
            TBranch        *b_mc_FSPartPDG;   //!
            TBranch        *b_mc_er_nPart;   //!
            TBranch        *b_mc_er_ID;   //!
            TBranch        *b_mc_er_status;   //!
            TBranch        *b_mc_er_posInNucX;   //!
            TBranch        *b_mc_er_posInNucY;   //!
            TBranch        *b_mc_er_posInNucZ;   //!
            TBranch        *b_mc_er_Px;   //!
            TBranch        *b_mc_er_Py;   //!
            TBranch        *b_mc_er_Pz;   //!
            TBranch        *b_mc_er_E;   //!
            TBranch        *b_mc_er_FD;   //!
            TBranch        *b_mc_er_LD;   //!
            TBranch        *b_mc_er_mother;   //!
            TBranch        *b_mc_fr_nNuAncestorIDs;   //!
            TBranch        *b_mc_fr_nuAncestorIDs;   //!
            TBranch        *b_mc_fr_nuParentID;   //!
            TBranch        *b_mc_fr_decMode;   //!
            TBranch        *b_mc_fr_primProtonVtx;   //!
            TBranch        *b_mc_fr_primProtonP;   //!
            TBranch        *b_mc_fr_nuParentDecVtx;   //!
            TBranch        *b_mc_fr_nuParentProdVtx;   //!
            TBranch        *b_mc_fr_nuParentProdP;   //!
            TBranch        *b_mc_cvweight_total;   //!
            TBranch        *b_wgt;   //!
            TBranch        *b_mc_cvweight_totalFlux;   //!
            TBranch        *b_mc_cvweight_totalXsec;   //!
            TBranch        *b_mc_ppfx1_cvweight;   //!
            TBranch        *b_mc_hornCurrent_cvweight;   //!
            TBranch        *b_mc_gen1_cvweight_total;   //!
            TBranch        *b_gen1_wgt;   //!
            TBranch        *b_mc_gen1_cvweight_totalFlux;   //!
            TBranch        *b_mc_gen1_cvweight_NA49;   //!
            TBranch        *b_mc_wgt_Flux_BeamFocus_sz;   //!
            TBranch        *b_mc_wgt_Flux_BeamFocus;   //!
            TBranch        *b_mc_wgt_gen1_Flux_Tertiary_sz;   //!
            TBranch        *b_mc_wgt_gen1_Flux_Tertiary;   //!
            TBranch        *b_mc_wgt_gen1_Flux_NA49_sz;   //!
            TBranch        *b_mc_wgt_gen1_Flux_NA49;   //!
            TBranch        *b_mc_wgt_Norm_sz;   //!
            TBranch        *b_mc_wgt_Norm;   //!
            TBranch        *b_mc_wgt_ppfx1_Total_sz;   //!
            TBranch        *b_mc_wgt_ppfx1_Total;   //!
            TBranch        *b_mc_vertex_batch;   //!
            TBranch        *b_prong_part_score;   //!
            TBranch        *b_prong_part_mass;   //!
            TBranch        *b_prong_part_charge;   //!
            TBranch        *b_prong_part_pid;   //!
            TBranch        *b_prong_part_E;   //!
            TBranch        *b_prong_part_pos;   //!

            NuECCQE(TTree *tree=0);
            virtual ~NuECCQE();
            virtual Int_t    Cut(Long64_t entry);
            virtual Int_t    GetEntry(Long64_t entry);
            virtual Long64_t LoadTree(Long64_t entry);
            virtual void     Init(TTree *tree);
            virtual void     Loop();
            virtual Bool_t   Notify();
            virtual void     Show(Long64_t entry = -1);
    };

} // end namespace

#endif

#ifdef NuECCQE_cxx
RECOTRACKS_ANA::NuECCQE::NuECCQE(TTree *tree) : fChain(0) 
{
    // if parameter tree is not specified (or zero), connect the file
    // used to generate this class and read the Tree.
    if (tree == 0) {
        TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("SIM_minerva_00113270_Subruns_0001_NuECCQE_Ana_Tuple_v21r1p1.root");
        if (!f || !f->IsOpen()) {
            f = new TFile("SIM_minerva_00113270_Subruns_0001_NuECCQE_Ana_Tuple_v21r1p1.root");
        }
        f->GetObject("NuECCQE",tree);

    }
    Init(tree);
}

RECOTRACKS_ANA::NuECCQE::~NuECCQE()
{
    if (!fChain) return;
    delete fChain->GetCurrentFile();
}

Int_t RECOTRACKS_ANA::NuECCQE::GetEntry(Long64_t entry)
{
    // Read contents of entry.
    if (!fChain) return 0;
    return fChain->GetEntry(entry);
}
Long64_t RECOTRACKS_ANA::NuECCQE::LoadTree(Long64_t entry)
{
    // Set the environment to read one entry
    if (!fChain) return -5;
    Long64_t centry = fChain->LoadTree(entry);
    if (centry < 0) return centry;
    if (fChain->GetTreeNumber() != fCurrent) {
        fCurrent = fChain->GetTreeNumber();
        Notify();
    }
    return centry;
}

void RECOTRACKS_ANA::NuECCQE::Init(TTree *tree)
{
    // The Init() function is called when the selector needs to initialize
    // a new tree or chain. Typically here the branch addresses and branch
    // pointers of the tree will be set.
    // It is normally not necessary to make changes to the generated
    // code, but the routine can be extended by the user if needed.
    // Init() will be called many times when running on PROOF
    // (once per file to be processed).

    // Set object pointer
    prong_axis_vector = new std::vector<std::vector<double>>;
    prong_axis_vertex = new std::vector<std::vector<double>>;
    prong_binned_energy_bin_contents = new std::vector<std::vector<double>>;
    prong_binned_energy_bin_indices = new std::vector<std::vector<double>>;
    prong_part_E = new std::vector<std::vector<double>>;
    prong_part_pos = new std::vector<std::vector<double>>;
    // Set branch addresses and branch pointers
    if (!tree) return;
    fChain = tree;
    fCurrent = -1;
    fChain->SetMakeClass(1);

#if 0
    fChain->GetBranch("prong_axis_vector")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_axis_vertex")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_binned_energy_bin_contents")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_binned_energy_bin_indices")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_part_E")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_part_pos")->SetMakeClass(kFALSE);
#endif

    fChain->SetBranchAddress("eventID", &eventID, &b_eventID);
    fChain->SetBranchAddress("physEvtNum", &physEvtNum, &b_physEvtNum);
    fChain->SetBranchAddress("n_hyps", &n_hyps, &b_n_hyps);
    fChain->SetBranchAddress("processType", &processType, &b_processType);
    fChain->SetBranchAddress("primaryPart", &primaryPart, &b_primaryPart);
    fChain->SetBranchAddress("n_slices", &n_slices, &b_n_slices);
    fChain->SetBranchAddress("slice_numbers", slice_numbers, &b_slice_numbers);
    fChain->SetBranchAddress("shared_slice", &shared_slice, &b_shared_slice);
    fChain->SetBranchAddress("vtx", vtx, &b_vtx);
    fChain->SetBranchAddress("vtxErr", vtxErr, &b_vtxErr);
    fChain->SetBranchAddress("E", E, &b_E);
    fChain->SetBranchAddress("reco_vertex_batch", &reco_vertex_batch, &b_reco_vertex_batch);
    fChain->SetBranchAddress("found_truth", &found_truth, &b_found_truth);
    fChain->SetBranchAddress("phys_front_activity", &phys_front_activity, &b_phys_front_activity);
    fChain->SetBranchAddress("phys_energy_in_road_upstream_is_rockmuon_consistent", &phys_energy_in_road_upstream_is_rockmuon_consistent, &b_phys_energy_in_road_upstream_is_rockmuon_consistent);
    fChain->SetBranchAddress("rock_muons_removed", &rock_muons_removed, &b_rock_muons_removed);
    fChain->SetBranchAddress("minos_track_match", &minos_track_match, &b_minos_track_match);
    fChain->SetBranchAddress("minos_stub_match", &minos_stub_match, &b_minos_stub_match);
    fChain->SetBranchAddress("unknown_helicity", &unknown_helicity, &b_unknown_helicity);
    fChain->SetBranchAddress("minos_track_inside_partial_plane", &minos_track_inside_partial_plane, &b_minos_track_inside_partial_plane);
    fChain->SetBranchAddress("prim_vtx_has_misassigned_track_direction", &prim_vtx_has_misassigned_track_direction, &b_prim_vtx_has_misassigned_track_direction);
    fChain->SetBranchAddress("prim_vtx_has_broken_track", &prim_vtx_has_broken_track, &b_prim_vtx_has_broken_track);
    fChain->SetBranchAddress("EMLikeTrackMultiplicity", &EMLikeTrackMultiplicity, &b_EMLikeTrackMultiplicity);
    fChain->SetBranchAddress("ExtraEnergy_nClusters", &ExtraEnergy_nClusters, &b_ExtraEnergy_nClusters);
    fChain->SetBranchAddress("HasFiducialVertex", &HasFiducialVertex, &b_HasFiducialVertex);
    fChain->SetBranchAddress("HasNoBackExitingTracks", &HasNoBackExitingTracks, &b_HasNoBackExitingTracks);
    fChain->SetBranchAddress("HasNoNonEMExitingTracks", &HasNoNonEMExitingTracks, &b_HasNoNonEMExitingTracks);
    fChain->SetBranchAddress("HasNoNonProtons", &HasNoNonProtons, &b_HasNoNonProtons);
    fChain->SetBranchAddress("HasNoVertexMismatch", &HasNoVertexMismatch, &b_HasNoVertexMismatch);
    fChain->SetBranchAddress("HasTracks", &HasTracks, &b_HasTracks);
    fChain->SetBranchAddress("NumShortTracks", &NumShortTracks, &b_NumShortTracks);
    fChain->SetBranchAddress("NumTracks", &NumTracks, &b_NumTracks);
    fChain->SetBranchAddress("ODMatchProng", &ODMatchProng, &b_ODMatchProng);
    fChain->SetBranchAddress("StartPointVertexMultiplicity", &StartPointVertexMultiplicity, &b_StartPointVertexMultiplicity);
    fChain->SetBranchAddress("TruePID", &TruePID, &b_TruePID);
    fChain->SetBranchAddress("UpstreamInlineNClusters", &UpstreamInlineNClusters, &b_UpstreamInlineNClusters);
    fChain->SetBranchAddress("UpstreamInlineNDigits", &UpstreamInlineNDigits, &b_UpstreamInlineNDigits);
    fChain->SetBranchAddress("VertexBlob_nClusters", &VertexBlob_nClusters, &b_VertexBlob_nClusters);
    fChain->SetBranchAddress("VertexTrackMultiplicity", &VertexTrackMultiplicity, &b_VertexTrackMultiplicity);
    fChain->SetBranchAddress("broken_track_most_us_plane", &broken_track_most_us_plane, &b_broken_track_most_us_plane);
    fChain->SetBranchAddress("eProng_nClusters", &eProng_nClusters, &b_eProng_nClusters);
    fChain->SetBranchAddress("n_indices", &n_indices, &b_n_indices);
    fChain->SetBranchAddress("phys_energy_in_road_downstream_nplanes", &phys_energy_in_road_downstream_nplanes, &b_phys_energy_in_road_downstream_nplanes);
    fChain->SetBranchAddress("phys_energy_in_road_upstream_nplanes", &phys_energy_in_road_upstream_nplanes, &b_phys_energy_in_road_upstream_nplanes);
    fChain->SetBranchAddress("phys_n_dead_discr_pair", &phys_n_dead_discr_pair, &b_phys_n_dead_discr_pair);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_in_prim_track_region", &phys_n_dead_discr_pair_in_prim_track_region, &b_phys_n_dead_discr_pair_in_prim_track_region);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_two_mod_downstream_prim_track", &phys_n_dead_discr_pair_two_mod_downstream_prim_track, &b_phys_n_dead_discr_pair_two_mod_downstream_prim_track);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_two_mod_upstream_prim_vtx", &phys_n_dead_discr_pair_two_mod_upstream_prim_vtx, &b_phys_n_dead_discr_pair_two_mod_upstream_prim_vtx);
    fChain->SetBranchAddress("phys_n_dead_discr_pair_upstream_prim_track_proj", &phys_n_dead_discr_pair_upstream_prim_track_proj, &b_phys_n_dead_discr_pair_upstream_prim_track_proj);
    fChain->SetBranchAddress("phys_vertex_is_fiducial", &phys_vertex_is_fiducial, &b_phys_vertex_is_fiducial);
    fChain->SetBranchAddress("ConeEnergyVis", &ConeEnergyVis, &b_ConeEnergyVis);
    fChain->SetBranchAddress("ExtraEnergyVis", &ExtraEnergyVis, &b_ExtraEnergyVis);
    fChain->SetBranchAddress("Psi", &Psi, &b_Psi);
    fChain->SetBranchAddress("TrueEnergy", &TrueEnergy, &b_TrueEnergy);
    fChain->SetBranchAddress("TrueTheta", &TrueTheta, &b_TrueTheta);
    fChain->SetBranchAddress("UpstreamInlineEnergy", &UpstreamInlineEnergy, &b_UpstreamInlineEnergy);
    fChain->SetBranchAddress("UpstreamInlineEnergyWgtdPosMean", &UpstreamInlineEnergyWgtdPosMean, &b_UpstreamInlineEnergyWgtdPosMean);
    fChain->SetBranchAddress("UpstreamInlineEnergyWgtdPosRMS", &UpstreamInlineEnergyWgtdPosRMS, &b_UpstreamInlineEnergyWgtdPosRMS);
    fChain->SetBranchAddress("UpstreamODEnergy", &UpstreamODEnergy, &b_UpstreamODEnergy);
    fChain->SetBranchAddress("VertexBlobEnergy", &VertexBlobEnergy, &b_VertexBlobEnergy);
    fChain->SetBranchAddress("energy_from_mc", &energy_from_mc, &b_energy_from_mc);
    fChain->SetBranchAddress("energy_from_mc_fraction", &energy_from_mc_fraction, &b_energy_from_mc_fraction);
    fChain->SetBranchAddress("energy_from_mc_fraction_of_highest", &energy_from_mc_fraction_of_highest, &b_energy_from_mc_fraction_of_highest);
    fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
    fChain->SetBranchAddress("muon_theta", &muon_theta, &b_muon_theta);
    fChain->SetBranchAddress("muon_thetaX", &muon_thetaX, &b_muon_thetaX);
    fChain->SetBranchAddress("muon_thetaY", &muon_thetaY, &b_muon_thetaY);
    fChain->SetBranchAddress("phys_energy_dispersed", &phys_energy_dispersed, &b_phys_energy_dispersed);
    fChain->SetBranchAddress("phys_energy_in_road_downstream", &phys_energy_in_road_downstream, &b_phys_energy_in_road_downstream);
    fChain->SetBranchAddress("phys_energy_in_road_upstream", &phys_energy_in_road_upstream, &b_phys_energy_in_road_upstream);
    fChain->SetBranchAddress("phys_energy_unattached", &phys_energy_unattached, &b_phys_energy_unattached);
    fChain->SetBranchAddress("prim_vtx_smallest_opening_angle", &prim_vtx_smallest_opening_angle, &b_prim_vtx_smallest_opening_angle);
    fChain->SetBranchAddress("latticeEnergyIndices", latticeEnergyIndices, &b_latticeEnergyIndices);
    fChain->SetBranchAddress("michel_digits_sz", &michel_digits_sz, &b_michel_digits_sz);
    fChain->SetBranchAddress("michel_digits", michel_digits, &b_michel_digits);
    fChain->SetBranchAddress("ExtraEnergy", ExtraEnergy, &b_ExtraEnergy);
    fChain->SetBranchAddress("ExtraEnergyClusters_X", ExtraEnergyClusters_X, &b_ExtraEnergyClusters_X);
    fChain->SetBranchAddress("ExtraEnergyClusters_Y", ExtraEnergyClusters_Y, &b_ExtraEnergyClusters_Y);
    fChain->SetBranchAddress("ExtraEnergyClusters_Z", ExtraEnergyClusters_Z, &b_ExtraEnergyClusters_Z);
    fChain->SetBranchAddress("ExtraEnergyClusters_energy", ExtraEnergyClusters_energy, &b_ExtraEnergyClusters_energy);
    fChain->SetBranchAddress("ExtraEnergyClusters_nDigits", ExtraEnergyClusters_nDigits, &b_ExtraEnergyClusters_nDigits);
    fChain->SetBranchAddress("ExtraEnergyClusters_width", ExtraEnergyClusters_width, &b_ExtraEnergyClusters_width);
    fChain->SetBranchAddress("NonProtonScores_sz", &NonProtonScores_sz, &b_NonProtonScores_sz);
    fChain->SetBranchAddress("NonProtonScores", NonProtonScores, &b_NonProtonScores);
    fChain->SetBranchAddress("VertexBlobClusters_X", VertexBlobClusters_X, &b_VertexBlobClusters_X);
    fChain->SetBranchAddress("VertexBlobClusters_Y", VertexBlobClusters_Y, &b_VertexBlobClusters_Y);
    fChain->SetBranchAddress("VertexBlobClusters_Z", VertexBlobClusters_Z, &b_VertexBlobClusters_Z);
    fChain->SetBranchAddress("VertexBlobClusters_energy", VertexBlobClusters_energy, &b_VertexBlobClusters_energy);
    fChain->SetBranchAddress("VertexBlobClusters_nDigits", VertexBlobClusters_nDigits, &b_VertexBlobClusters_nDigits);
    fChain->SetBranchAddress("VertexBlobClusters_width", VertexBlobClusters_width, &b_VertexBlobClusters_width);
    fChain->SetBranchAddress("VertexEnergy", VertexEnergy, &b_VertexEnergy);
    fChain->SetBranchAddress("eProngClusters_X", eProngClusters_X, &b_eProngClusters_X);
    fChain->SetBranchAddress("eProngClusters_Y", eProngClusters_Y, &b_eProngClusters_Y);
    fChain->SetBranchAddress("eProngClusters_Z", eProngClusters_Z, &b_eProngClusters_Z);
    fChain->SetBranchAddress("eProngClusters_axis_projection", eProngClusters_axis_projection, &b_eProngClusters_axis_projection);
    fChain->SetBranchAddress("eProngClusters_cal_energy", eProngClusters_cal_energy, &b_eProngClusters_cal_energy);
    fChain->SetBranchAddress("eProngClusters_energy", eProngClusters_energy, &b_eProngClusters_energy);
    fChain->SetBranchAddress("eProngClusters_nDigits", eProngClusters_nDigits, &b_eProngClusters_nDigits);
    fChain->SetBranchAddress("eProngClusters_width", eProngClusters_width, &b_eProngClusters_width);
    fChain->SetBranchAddress("latticeNormEnergySums", latticeNormEnergySums, &b_latticeNormEnergySums);
    fChain->SetBranchAddress("latticeRelativeTimes", latticeRelativeTimes, &b_latticeRelativeTimes);
    fChain->SetBranchAddress("michel_energy_sz", &michel_energy_sz, &b_michel_energy_sz);
    fChain->SetBranchAddress("michel_energy", michel_energy, &b_michel_energy);
    fChain->SetBranchAddress("michel_first_hit_fraction_sz", &michel_first_hit_fraction_sz, &b_michel_first_hit_fraction_sz);
    fChain->SetBranchAddress("michel_first_hit_fraction", michel_first_hit_fraction, &b_michel_first_hit_fraction);
    fChain->SetBranchAddress("michel_slice_energy_sz", &michel_slice_energy_sz, &b_michel_slice_energy_sz);
    fChain->SetBranchAddress("michel_slice_energy", michel_slice_energy, &b_michel_slice_energy);
    fChain->SetBranchAddress("michel_z_extent_sz", &michel_z_extent_sz, &b_michel_z_extent_sz);
    fChain->SetBranchAddress("michel_z_extent", michel_z_extent, &b_michel_z_extent);
    fChain->SetBranchAddress("n_prongs", &n_prongs, &b_n_prongs);
    fChain->SetBranchAddress("prong_nParticles", prong_nParticles, &b_prong_nParticles);
    fChain->SetBranchAddress("prong_GEANTTrackNum", prong_GEANTTrackNum, &b_prong_GEANTTrackNum);
    fChain->SetBranchAddress("prong_HasTruth", prong_HasTruth, &b_prong_HasTruth);
    fChain->SetBranchAddress("prong_SeedTrackType", prong_SeedTrackType, &b_prong_SeedTrackType);
    fChain->SetBranchAddress("prong_TruePID", prong_TruePID, &b_prong_TruePID);
    fChain->SetBranchAddress("prong_binned_energy_nbins", prong_binned_energy_nbins, &b_prong_binned_energy_nbins);
    fChain->SetBranchAddress("prong_n_frontdEdX_planes_sampled", prong_n_frontdEdX_planes_sampled, &b_prong_n_frontdEdX_planes_sampled);
    fChain->SetBranchAddress("prong_n_tracks", prong_n_tracks, &b_prong_n_tracks);
    fChain->SetBranchAddress("prong_vertexMoved", prong_vertexMoved, &b_prong_vertexMoved);
    fChain->SetBranchAddress("prong_BackMiddleRatio", prong_BackMiddleRatio, &b_prong_BackMiddleRatio);
    fChain->SetBranchAddress("prong_BeginsInTracker", prong_BeginsInTracker, &b_prong_BeginsInTracker);
    fChain->SetBranchAddress("prong_CalCorrectedEnergy", prong_CalCorrectedEnergy, &b_prong_CalCorrectedEnergy);
    fChain->SetBranchAddress("prong_DataFrac", prong_DataFrac, &b_prong_DataFrac);
    fChain->SetBranchAddress("prong_ECALVisE", prong_ECALVisE, &b_prong_ECALVisE);
    fChain->SetBranchAddress("prong_EWgtdLengthByEnergy", prong_EWgtdLengthByEnergy, &b_prong_EWgtdLengthByEnergy);
    fChain->SetBranchAddress("prong_EWgtdProngLength", prong_EWgtdProngLength, &b_prong_EWgtdProngLength);
    fChain->SetBranchAddress("prong_FirstFireFraction", prong_FirstFireFraction, &b_prong_FirstFireFraction);
    fChain->SetBranchAddress("prong_FracProngFromBestTrueTraj", prong_FracProngFromBestTrueTraj, &b_prong_FracProngFromBestTrueTraj);
    fChain->SetBranchAddress("prong_HCALVisE", prong_HCALVisE, &b_prong_HCALVisE);
    fChain->SetBranchAddress("prong_HCALVisEnergy", prong_HCALVisEnergy, &b_prong_HCALVisEnergy);
    fChain->SetBranchAddress("prong_LocalShowerWidth", prong_LocalShowerWidth, &b_prong_LocalShowerWidth);
    fChain->SetBranchAddress("prong_LongitudinalBunchGapScore", prong_LongitudinalBunchGapScore, &b_prong_LongitudinalBunchGapScore);
    fChain->SetBranchAddress("prong_MedianPlaneShowerWidth", prong_MedianPlaneShowerWidth, &b_prong_MedianPlaneShowerWidth);
    fChain->SetBranchAddress("prong_NoHCALActivity", prong_NoHCALActivity, &b_prong_NoHCALActivity);
    fChain->SetBranchAddress("prong_NoODActivity", prong_NoODActivity, &b_prong_NoODActivity);
    fChain->SetBranchAddress("prong_NonMIPClusFrac", prong_NonMIPClusFrac, &b_prong_NonMIPClusFrac);
    fChain->SetBranchAddress("prong_ODVisE", prong_ODVisE, &b_prong_ODVisE);
    fChain->SetBranchAddress("prong_ProngLength", prong_ProngLength, &b_prong_ProngLength);
    fChain->SetBranchAddress("prong_SeedTrackChi2", prong_SeedTrackChi2, &b_prong_SeedTrackChi2);
    fChain->SetBranchAddress("prong_ShowerEnergySeparation", prong_ShowerEnergySeparation, &b_prong_ShowerEnergySeparation);
    fChain->SetBranchAddress("prong_ShowerLengthEnergyScale", prong_ShowerLengthEnergyScale, &b_prong_ShowerLengthEnergyScale);
    fChain->SetBranchAddress("prong_SideECALVisE", prong_SideECALVisE, &b_prong_SideECALVisE);
    fChain->SetBranchAddress("prong_TotalVisE", prong_TotalVisE, &b_prong_TotalVisE);
    fChain->SetBranchAddress("prong_TransverseGapScore", prong_TransverseGapScore, &b_prong_TransverseGapScore);
    fChain->SetBranchAddress("prong_TransverseShowerAsymmetryDenominatorU", prong_TransverseShowerAsymmetryDenominatorU, &b_prong_TransverseShowerAsymmetryDenominatorU);
    fChain->SetBranchAddress("prong_TransverseShowerAsymmetryDenominatorV", prong_TransverseShowerAsymmetryDenominatorV, &b_prong_TransverseShowerAsymmetryDenominatorV);
    fChain->SetBranchAddress("prong_TransverseShowerAsymmetryDenominatorX", prong_TransverseShowerAsymmetryDenominatorX, &b_prong_TransverseShowerAsymmetryDenominatorX);
    fChain->SetBranchAddress("prong_TransverseShowerAsymmetryNumeratorU", prong_TransverseShowerAsymmetryNumeratorU, &b_prong_TransverseShowerAsymmetryNumeratorU);
    fChain->SetBranchAddress("prong_TransverseShowerAsymmetryNumeratorV", prong_TransverseShowerAsymmetryNumeratorV, &b_prong_TransverseShowerAsymmetryNumeratorV);
    fChain->SetBranchAddress("prong_TransverseShowerAsymmetryNumeratorX", prong_TransverseShowerAsymmetryNumeratorX, &b_prong_TransverseShowerAsymmetryNumeratorX);
    fChain->SetBranchAddress("prong_TrimmedCaloEnergy", prong_TrimmedCaloEnergy, &b_prong_TrimmedCaloEnergy);
    fChain->SetBranchAddress("prong_TrimmedVisE", prong_TrimmedVisE, &b_prong_TrimmedVisE);
    fChain->SetBranchAddress("prong_TrueEnergy", prong_TrueEnergy, &b_prong_TrueEnergy);
    fChain->SetBranchAddress("prong_TrueFrontdEdX", prong_TrueFrontdEdX, &b_prong_TrueFrontdEdX);
    fChain->SetBranchAddress("prong_TrueTheta", prong_TrueTheta, &b_prong_TrueTheta);
    fChain->SetBranchAddress("prong_TrueTrajFracInProng", prong_TrueTrajFracInProng, &b_prong_TrueTrajFracInProng);
    fChain->SetBranchAddress("prong_VertexResidualR", prong_VertexResidualR, &b_prong_VertexResidualR);
    fChain->SetBranchAddress("prong_VertexResidualX", prong_VertexResidualX, &b_prong_VertexResidualX);
    fChain->SetBranchAddress("prong_VertexResidualY", prong_VertexResidualY, &b_prong_VertexResidualY);
    fChain->SetBranchAddress("prong_VertexResidualZ", prong_VertexResidualZ, &b_prong_VertexResidualZ);
    fChain->SetBranchAddress("prong_dEdXMaxECAL", prong_dEdXMaxECAL, &b_prong_dEdXMaxECAL);
    fChain->SetBranchAddress("prong_dEdXMaxTracker", prong_dEdXMaxTracker, &b_prong_dEdXMaxTracker);
    fChain->SetBranchAddress("prong_dEdXMean", prong_dEdXMean, &b_prong_dEdXMean);
    fChain->SetBranchAddress("prong_dEdXMeanFrontNumBinsTracker", prong_dEdXMeanFrontNumBinsTracker, &b_prong_dEdXMeanFrontNumBinsTracker);
    fChain->SetBranchAddress("prong_dEdXMeanFrontPositionTracker", prong_dEdXMeanFrontPositionTracker, &b_prong_dEdXMeanFrontPositionTracker);
    fChain->SetBranchAddress("prong_dEdXMeanFrontTracker", prong_dEdXMeanFrontTracker, &b_prong_dEdXMeanFrontTracker);
    fChain->SetBranchAddress("prong_dEdXMedianECAL", prong_dEdXMedianECAL, &b_prong_dEdXMedianECAL);
    fChain->SetBranchAddress("prong_dEdXMedianFrontTracker", prong_dEdXMedianFrontTracker, &b_prong_dEdXMedianFrontTracker);
    fChain->SetBranchAddress("prong_dEdXMedianTracker", prong_dEdXMedianTracker, &b_prong_dEdXMedianTracker);
    fChain->SetBranchAddress("prong_projection_bin_width", prong_projection_bin_width, &b_prong_projection_bin_width);
    fChain->SetBranchAddress("prong_axis_vector", &prong_axis_vector, &b_prong_axis_vector);
    fChain->SetBranchAddress("prong_axis_vertex", &prong_axis_vertex, &b_prong_axis_vertex);
    fChain->SetBranchAddress("prong_binned_energy_bin_contents", &prong_binned_energy_bin_contents, &b_prong_binned_energy_bin_contents);
    fChain->SetBranchAddress("prong_binned_energy_bin_indices", &prong_binned_energy_bin_indices, &b_prong_binned_energy_bin_indices);
    fChain->SetBranchAddress("truth_pass_NuECCQE", &truth_pass_NuECCQE, &b_truth_pass_NuECCQE);
    fChain->SetBranchAddress("truth_has_physics_event", &truth_has_physics_event, &b_truth_has_physics_event);
    fChain->SetBranchAddress("truth_IsFiducial", &truth_IsFiducial, &b_truth_IsFiducial);
    fChain->SetBranchAddress("truth_Enu_QE", &truth_Enu_QE, &b_truth_Enu_QE);
    fChain->SetBranchAddress("truth_Q2_QE", &truth_Q2_QE, &b_truth_Q2_QE);
    fChain->SetBranchAddress("truth_electron_theta_wrtbeam", &truth_electron_theta_wrtbeam, &b_truth_electron_theta_wrtbeam);
    fChain->SetBranchAddress("genie_wgt_n_shifts", &genie_wgt_n_shifts, &b_genie_wgt_n_shifts);
    fChain->SetBranchAddress("truth_genie_wgt_AGKYxF1pi", truth_genie_wgt_AGKYxF1pi, &b_truth_genie_wgt_AGKYxF1pi);
    fChain->SetBranchAddress("truth_genie_wgt_AhtBY", truth_genie_wgt_AhtBY, &b_truth_genie_wgt_AhtBY);
    fChain->SetBranchAddress("truth_genie_wgt_BhtBY", truth_genie_wgt_BhtBY, &b_truth_genie_wgt_BhtBY);
    fChain->SetBranchAddress("truth_genie_wgt_CCQEPauliSupViaKF", truth_genie_wgt_CCQEPauliSupViaKF, &b_truth_genie_wgt_CCQEPauliSupViaKF);
    fChain->SetBranchAddress("truth_genie_wgt_CV1uBY", truth_genie_wgt_CV1uBY, &b_truth_genie_wgt_CV1uBY);
    fChain->SetBranchAddress("truth_genie_wgt_CV2uBY", truth_genie_wgt_CV2uBY, &b_truth_genie_wgt_CV2uBY);
    fChain->SetBranchAddress("truth_genie_wgt_EtaNCEL", truth_genie_wgt_EtaNCEL, &b_truth_genie_wgt_EtaNCEL);
    fChain->SetBranchAddress("truth_genie_wgt_FrAbs_N", truth_genie_wgt_FrAbs_N, &b_truth_genie_wgt_FrAbs_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrAbs_pi", truth_genie_wgt_FrAbs_pi, &b_truth_genie_wgt_FrAbs_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrCEx_N", truth_genie_wgt_FrCEx_N, &b_truth_genie_wgt_FrCEx_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrCEx_pi", truth_genie_wgt_FrCEx_pi, &b_truth_genie_wgt_FrCEx_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrElas_N", truth_genie_wgt_FrElas_N, &b_truth_genie_wgt_FrElas_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrElas_pi", truth_genie_wgt_FrElas_pi, &b_truth_genie_wgt_FrElas_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrInel_N", truth_genie_wgt_FrInel_N, &b_truth_genie_wgt_FrInel_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrInel_pi", truth_genie_wgt_FrInel_pi, &b_truth_genie_wgt_FrInel_pi);
    fChain->SetBranchAddress("truth_genie_wgt_FrPiProd_N", truth_genie_wgt_FrPiProd_N, &b_truth_genie_wgt_FrPiProd_N);
    fChain->SetBranchAddress("truth_genie_wgt_FrPiProd_pi", truth_genie_wgt_FrPiProd_pi, &b_truth_genie_wgt_FrPiProd_pi);
    fChain->SetBranchAddress("truth_genie_wgt_MFP_N", truth_genie_wgt_MFP_N, &b_truth_genie_wgt_MFP_N);
    fChain->SetBranchAddress("truth_genie_wgt_MFP_pi", truth_genie_wgt_MFP_pi, &b_truth_genie_wgt_MFP_pi);
    fChain->SetBranchAddress("truth_genie_wgt_MaCCQE", truth_genie_wgt_MaCCQE, &b_truth_genie_wgt_MaCCQE);
    fChain->SetBranchAddress("truth_genie_wgt_MaCCQEshape", truth_genie_wgt_MaCCQEshape, &b_truth_genie_wgt_MaCCQEshape);
    fChain->SetBranchAddress("truth_genie_wgt_MaNCEL", truth_genie_wgt_MaNCEL, &b_truth_genie_wgt_MaNCEL);
    fChain->SetBranchAddress("truth_genie_wgt_MaRES", truth_genie_wgt_MaRES, &b_truth_genie_wgt_MaRES);
    fChain->SetBranchAddress("truth_genie_wgt_MvRES", truth_genie_wgt_MvRES, &b_truth_genie_wgt_MvRES);
    fChain->SetBranchAddress("truth_genie_wgt_NormCCQE", truth_genie_wgt_NormCCQE, &b_truth_genie_wgt_NormCCQE);
    fChain->SetBranchAddress("truth_genie_wgt_NormCCRES", truth_genie_wgt_NormCCRES, &b_truth_genie_wgt_NormCCRES);
    fChain->SetBranchAddress("truth_genie_wgt_NormDISCC", truth_genie_wgt_NormDISCC, &b_truth_genie_wgt_NormDISCC);
    fChain->SetBranchAddress("truth_genie_wgt_NormNCRES", truth_genie_wgt_NormNCRES, &b_truth_genie_wgt_NormNCRES);
    fChain->SetBranchAddress("truth_genie_wgt_RDecBR1gamma", truth_genie_wgt_RDecBR1gamma, &b_truth_genie_wgt_RDecBR1gamma);
    fChain->SetBranchAddress("truth_genie_wgt_Rvn1pi", truth_genie_wgt_Rvn1pi, &b_truth_genie_wgt_Rvn1pi);
    fChain->SetBranchAddress("truth_genie_wgt_Rvn2pi", truth_genie_wgt_Rvn2pi, &b_truth_genie_wgt_Rvn2pi);
    fChain->SetBranchAddress("truth_genie_wgt_Rvp1pi", truth_genie_wgt_Rvp1pi, &b_truth_genie_wgt_Rvp1pi);
    fChain->SetBranchAddress("truth_genie_wgt_Rvp2pi", truth_genie_wgt_Rvp2pi, &b_truth_genie_wgt_Rvp2pi);
    fChain->SetBranchAddress("truth_genie_wgt_Theta_Delta2Npi", truth_genie_wgt_Theta_Delta2Npi, &b_truth_genie_wgt_Theta_Delta2Npi);
    fChain->SetBranchAddress("truth_genie_wgt_VecFFCCQEshape", truth_genie_wgt_VecFFCCQEshape, &b_truth_genie_wgt_VecFFCCQEshape);
    fChain->SetBranchAddress("truth_genie_wgt_shifts", truth_genie_wgt_shifts, &b_truth_genie_wgt_shifts);
    fChain->SetBranchAddress("NuECCQE_nuFlavor", &NuECCQE_nuFlavor, &b_NuECCQE_nuFlavor);
    fChain->SetBranchAddress("NuECCQE_nuHelicity", &NuECCQE_nuHelicity, &b_NuECCQE_nuHelicity);
    fChain->SetBranchAddress("NuECCQE_intCurrent", &NuECCQE_intCurrent, &b_NuECCQE_intCurrent);
    fChain->SetBranchAddress("NuECCQE_intType", &NuECCQE_intType, &b_NuECCQE_intType);
    fChain->SetBranchAddress("NuECCQE_E", &NuECCQE_E, &b_NuECCQE_E);
    fChain->SetBranchAddress("NuECCQE_Q2", &NuECCQE_Q2, &b_NuECCQE_Q2);
    fChain->SetBranchAddress("NuECCQE_x", &NuECCQE_x, &b_NuECCQE_x);
    fChain->SetBranchAddress("NuECCQE_y", &NuECCQE_y, &b_NuECCQE_y);
    fChain->SetBranchAddress("NuECCQE_W", &NuECCQE_W, &b_NuECCQE_W);
    fChain->SetBranchAddress("NuECCQE_score", &NuECCQE_score, &b_NuECCQE_score);
    fChain->SetBranchAddress("NuECCQE_leptonE", NuECCQE_leptonE, &b_NuECCQE_leptonE);
    fChain->SetBranchAddress("NuECCQE_vtx", NuECCQE_vtx, &b_NuECCQE_vtx);
    fChain->SetBranchAddress("ev_run", &ev_run, &b_ev_run);
    fChain->SetBranchAddress("ev_subrun", &ev_subrun, &b_ev_subrun);
    fChain->SetBranchAddress("ev_detector", &ev_detector, &b_ev_detector);
    fChain->SetBranchAddress("ev_triggerType", &ev_triggerType, &b_ev_triggerType);
    fChain->SetBranchAddress("ev_gate", &ev_gate, &b_ev_gate);
    fChain->SetBranchAddress("ev_global_gate", &ev_global_gate, &b_ev_global_gate);
    fChain->SetBranchAddress("ev_gps_time_sec", &ev_gps_time_sec, &b_ev_gps_time_sec);
    fChain->SetBranchAddress("ev_gps_time_usec", &ev_gps_time_usec, &b_ev_gps_time_usec);
    fChain->SetBranchAddress("numi_pot", &numi_pot, &b_numi_pot);
    fChain->SetBranchAddress("numi_horn_curr", &numi_horn_curr, &b_numi_horn_curr);
    fChain->SetBranchAddress("numi_x_pos", &numi_x_pos, &b_numi_x_pos);
    fChain->SetBranchAddress("numi_y_pos", &numi_y_pos, &b_numi_y_pos);
    fChain->SetBranchAddress("numi_x_width", &numi_x_width, &b_numi_x_width);
    fChain->SetBranchAddress("numi_y_width", &numi_y_width, &b_numi_y_width);
    fChain->SetBranchAddress("numi_bpm1", &numi_bpm1, &b_numi_bpm1);
    fChain->SetBranchAddress("numi_bpm2", &numi_bpm2, &b_numi_bpm2);
    fChain->SetBranchAddress("numi_bpm3", &numi_bpm3, &b_numi_bpm3);
    fChain->SetBranchAddress("numi_bpm4", &numi_bpm4, &b_numi_bpm4);
    fChain->SetBranchAddress("numi_bpm5", &numi_bpm5, &b_numi_bpm5);
    fChain->SetBranchAddress("numi_bpm6", &numi_bpm6, &b_numi_bpm6);
    fChain->SetBranchAddress("numi_tor101", &numi_tor101, &b_numi_tor101);
    fChain->SetBranchAddress("numi_tr101d", &numi_tr101d, &b_numi_tr101d);
    fChain->SetBranchAddress("numi_tortgt", &numi_tortgt, &b_numi_tortgt);
    fChain->SetBranchAddress("numi_trtgtd", &numi_trtgtd, &b_numi_trtgtd);
    fChain->SetBranchAddress("batch_structure", &batch_structure, &b_batch_structure);
    fChain->SetBranchAddress("numi_minos_time_sec", &numi_minos_time_sec, &b_numi_minos_time_sec);
    fChain->SetBranchAddress("numi_minos_time_nsec", &numi_minos_time_nsec, &b_numi_minos_time_nsec);
    fChain->SetBranchAddress("numi_database_sec", &numi_database_sec, &b_numi_database_sec);
    fChain->SetBranchAddress("numi_database_nsec", &numi_database_nsec, &b_numi_database_nsec);
    fChain->SetBranchAddress("numi_is_good_beam_spill", &numi_is_good_beam_spill, &b_numi_is_good_beam_spill);
    fChain->SetBranchAddress("numi_is_bad_pot_data_spill", &numi_is_bad_pot_data_spill, &b_numi_is_bad_pot_data_spill);
    fChain->SetBranchAddress("numi_is_no_beam_spill", &numi_is_no_beam_spill, &b_numi_is_no_beam_spill);
    fChain->SetBranchAddress("numi_is_bad_data_spill", &numi_is_bad_data_spill, &b_numi_is_bad_data_spill);
    fChain->SetBranchAddress("numi_is_bad_profile_x_width_data", &numi_is_bad_profile_x_width_data, &b_numi_is_bad_profile_x_width_data);
    fChain->SetBranchAddress("numi_is_bad_profile_y_width_data", &numi_is_bad_profile_y_width_data, &b_numi_is_bad_profile_y_width_data);
    fChain->SetBranchAddress("numi_is_bad_x_position_data", &numi_is_bad_x_position_data, &b_numi_is_bad_x_position_data);
    fChain->SetBranchAddress("numi_is_bad_y_position_data", &numi_is_bad_y_position_data, &b_numi_is_bad_y_position_data);
    fChain->SetBranchAddress("numi_is_bad_horn_curr_data", &numi_is_bad_horn_curr_data, &b_numi_is_bad_horn_curr_data);
    fChain->SetBranchAddress("numi_is_bad_nearest_time_spill", &numi_is_bad_nearest_time_spill, &b_numi_is_bad_nearest_time_spill);
    fChain->SetBranchAddress("numi_is_bad_beam_spill", &numi_is_bad_beam_spill, &b_numi_is_bad_beam_spill);
    fChain->SetBranchAddress("numi_is_bad_pot_spill", &numi_is_bad_pot_spill, &b_numi_is_bad_pot_spill);
    fChain->SetBranchAddress("numi_is_bad_x_pos", &numi_is_bad_x_pos, &b_numi_is_bad_x_pos);
    fChain->SetBranchAddress("numi_is_bad_y_pos", &numi_is_bad_y_pos, &b_numi_is_bad_y_pos);
    fChain->SetBranchAddress("numi_is_bad_beam_size", &numi_is_bad_beam_size, &b_numi_is_bad_beam_size);
    fChain->SetBranchAddress("numi_is_bad_profile_width_x", &numi_is_bad_profile_width_x, &b_numi_is_bad_profile_width_x);
    fChain->SetBranchAddress("numi_is_bad_profile_width_y", &numi_is_bad_profile_width_y, &b_numi_is_bad_profile_width_y);
    fChain->SetBranchAddress("numi_is_bad_horn_curr", &numi_is_bad_horn_curr, &b_numi_is_bad_horn_curr);
    fChain->SetBranchAddress("numi_is_target_out_spill", &numi_is_target_out_spill, &b_numi_is_target_out_spill);
    fChain->SetBranchAddress("numi_is_bad_beam_type_spill", &numi_is_bad_beam_type_spill, &b_numi_is_bad_beam_type_spill);
    fChain->SetBranchAddress("numi_is_bad_beam_frac_on_tgt_spill", &numi_is_bad_beam_frac_on_tgt_spill, &b_numi_is_bad_beam_frac_on_tgt_spill);
    fChain->SetBranchAddress("numi_is_good_position", &numi_is_good_position, &b_numi_is_good_position);
    fChain->SetBranchAddress("numi_is_good_width", &numi_is_good_width, &b_numi_is_good_width);
    fChain->SetBranchAddress("numi_is_good_toroids", &numi_is_good_toroids, &b_numi_is_good_toroids);
    fChain->SetBranchAddress("numi_is_good_delta_t", &numi_is_good_delta_t, &b_numi_is_good_delta_t);
    fChain->SetBranchAddress("numi_is_good_horn", &numi_is_good_horn, &b_numi_is_good_horn);
    fChain->SetBranchAddress("numi_time_to_nearest", &numi_time_to_nearest, &b_numi_time_to_nearest);
    fChain->SetBranchAddress("mc_run", &mc_run, &b_mc_run);
    fChain->SetBranchAddress("mc_subrun", &mc_subrun, &b_mc_subrun);
    fChain->SetBranchAddress("mc_nInteractions", &mc_nInteractions, &b_mc_nInteractions);
    fChain->SetBranchAddress("mc_MIState", &mc_MIState, &b_mc_MIState);
    fChain->SetBranchAddress("mc_pot", &mc_pot, &b_mc_pot);
    fChain->SetBranchAddress("mc_beamConfig", &mc_beamConfig, &b_mc_beamConfig);
    fChain->SetBranchAddress("mc_processType", &mc_processType, &b_mc_processType);
    fChain->SetBranchAddress("mc_nthEvtInSpill", &mc_nthEvtInSpill, &b_mc_nthEvtInSpill);
    fChain->SetBranchAddress("mc_nthEvtInFile", &mc_nthEvtInFile, &b_mc_nthEvtInFile);
    fChain->SetBranchAddress("mc_intType", &mc_intType, &b_mc_intType);
    fChain->SetBranchAddress("mc_current", &mc_current, &b_mc_current);
    fChain->SetBranchAddress("mc_charm", &mc_charm, &b_mc_charm);
    fChain->SetBranchAddress("mc_weight", &mc_weight, &b_mc_weight);
    fChain->SetBranchAddress("mc_XSec", &mc_XSec, &b_mc_XSec);
    fChain->SetBranchAddress("mc_diffXSec", &mc_diffXSec, &b_mc_diffXSec);
    fChain->SetBranchAddress("mc_incoming", &mc_incoming, &b_mc_incoming);
    fChain->SetBranchAddress("mc_fluxDriverProb", &mc_fluxDriverProb, &b_mc_fluxDriverProb);
    fChain->SetBranchAddress("mc_targetNucleus", &mc_targetNucleus, &b_mc_targetNucleus);
    fChain->SetBranchAddress("mc_targetZ", &mc_targetZ, &b_mc_targetZ);
    fChain->SetBranchAddress("mc_targetA", &mc_targetA, &b_mc_targetA);
    fChain->SetBranchAddress("mc_targetNucleon", &mc_targetNucleon, &b_mc_targetNucleon);
    fChain->SetBranchAddress("mc_struckQuark", &mc_struckQuark, &b_mc_struckQuark);
    fChain->SetBranchAddress("mc_seaQuark", &mc_seaQuark, &b_mc_seaQuark);
    fChain->SetBranchAddress("mc_resID", &mc_resID, &b_mc_resID);
    fChain->SetBranchAddress("mc_primaryLepton", &mc_primaryLepton, &b_mc_primaryLepton);
    fChain->SetBranchAddress("mc_incomingE", &mc_incomingE, &b_mc_incomingE);
    fChain->SetBranchAddress("mc_Bjorkenx", &mc_Bjorkenx, &b_mc_Bjorkenx);
    fChain->SetBranchAddress("mc_Bjorkeny", &mc_Bjorkeny, &b_mc_Bjorkeny);
    fChain->SetBranchAddress("mc_Q2", &mc_Q2, &b_mc_Q2);
    fChain->SetBranchAddress("mc_nuT", &mc_nuT, &b_mc_nuT);
    fChain->SetBranchAddress("mc_w", &mc_w, &b_mc_w);
    fChain->SetBranchAddress("mc_vtx", mc_vtx, &b_mc_vtx);
    fChain->SetBranchAddress("mc_incomingPartVec", mc_incomingPartVec, &b_mc_incomingPartVec);
    fChain->SetBranchAddress("mc_initNucVec", mc_initNucVec, &b_mc_initNucVec);
    fChain->SetBranchAddress("mc_primFSLepton", mc_primFSLepton, &b_mc_primFSLepton);
    fChain->SetBranchAddress("mc_nFSPart", &mc_nFSPart, &b_mc_nFSPart);
    fChain->SetBranchAddress("mc_FSPartPx", mc_FSPartPx, &b_mc_FSPartPx);
    fChain->SetBranchAddress("mc_FSPartPy", mc_FSPartPy, &b_mc_FSPartPy);
    fChain->SetBranchAddress("mc_FSPartPz", mc_FSPartPz, &b_mc_FSPartPz);
    fChain->SetBranchAddress("mc_FSPartE", mc_FSPartE, &b_mc_FSPartE);
    fChain->SetBranchAddress("mc_FSPartPDG", mc_FSPartPDG, &b_mc_FSPartPDG);
    fChain->SetBranchAddress("mc_er_nPart", &mc_er_nPart, &b_mc_er_nPart);
    fChain->SetBranchAddress("mc_er_ID", mc_er_ID, &b_mc_er_ID);
    fChain->SetBranchAddress("mc_er_status", mc_er_status, &b_mc_er_status);
    fChain->SetBranchAddress("mc_er_posInNucX", mc_er_posInNucX, &b_mc_er_posInNucX);
    fChain->SetBranchAddress("mc_er_posInNucY", mc_er_posInNucY, &b_mc_er_posInNucY);
    fChain->SetBranchAddress("mc_er_posInNucZ", mc_er_posInNucZ, &b_mc_er_posInNucZ);
    fChain->SetBranchAddress("mc_er_Px", mc_er_Px, &b_mc_er_Px);
    fChain->SetBranchAddress("mc_er_Py", mc_er_Py, &b_mc_er_Py);
    fChain->SetBranchAddress("mc_er_Pz", mc_er_Pz, &b_mc_er_Pz);
    fChain->SetBranchAddress("mc_er_E", mc_er_E, &b_mc_er_E);
    fChain->SetBranchAddress("mc_er_FD", mc_er_FD, &b_mc_er_FD);
    fChain->SetBranchAddress("mc_er_LD", mc_er_LD, &b_mc_er_LD);
    fChain->SetBranchAddress("mc_er_mother", mc_er_mother, &b_mc_er_mother);
    fChain->SetBranchAddress("mc_fr_nNuAncestorIDs", &mc_fr_nNuAncestorIDs, &b_mc_fr_nNuAncestorIDs);
    fChain->SetBranchAddress("mc_fr_nuAncestorIDs", mc_fr_nuAncestorIDs, &b_mc_fr_nuAncestorIDs);
    fChain->SetBranchAddress("mc_fr_nuParentID", &mc_fr_nuParentID, &b_mc_fr_nuParentID);
    fChain->SetBranchAddress("mc_fr_decMode", &mc_fr_decMode, &b_mc_fr_decMode);
    fChain->SetBranchAddress("mc_fr_primProtonVtx", mc_fr_primProtonVtx, &b_mc_fr_primProtonVtx);
    fChain->SetBranchAddress("mc_fr_primProtonP", mc_fr_primProtonP, &b_mc_fr_primProtonP);
    fChain->SetBranchAddress("mc_fr_nuParentDecVtx", mc_fr_nuParentDecVtx, &b_mc_fr_nuParentDecVtx);
    fChain->SetBranchAddress("mc_fr_nuParentProdVtx", mc_fr_nuParentProdVtx, &b_mc_fr_nuParentProdVtx);
    fChain->SetBranchAddress("mc_fr_nuParentProdP", mc_fr_nuParentProdP, &b_mc_fr_nuParentProdP);
    fChain->SetBranchAddress("mc_cvweight_total", &mc_cvweight_total, &b_mc_cvweight_total);
    fChain->SetBranchAddress("wgt", &wgt, &b_wgt);
    fChain->SetBranchAddress("mc_cvweight_totalFlux", &mc_cvweight_totalFlux, &b_mc_cvweight_totalFlux);
    fChain->SetBranchAddress("mc_cvweight_totalXsec", &mc_cvweight_totalXsec, &b_mc_cvweight_totalXsec);
    fChain->SetBranchAddress("mc_ppfx1_cvweight", &mc_ppfx1_cvweight, &b_mc_ppfx1_cvweight);
    fChain->SetBranchAddress("mc_hornCurrent_cvweight", &mc_hornCurrent_cvweight, &b_mc_hornCurrent_cvweight);
    fChain->SetBranchAddress("mc_gen1_cvweight_total", &mc_gen1_cvweight_total, &b_mc_gen1_cvweight_total);
    fChain->SetBranchAddress("gen1_wgt", &gen1_wgt, &b_gen1_wgt);
    fChain->SetBranchAddress("mc_gen1_cvweight_totalFlux", &mc_gen1_cvweight_totalFlux, &b_mc_gen1_cvweight_totalFlux);
    fChain->SetBranchAddress("mc_gen1_cvweight_NA49", &mc_gen1_cvweight_NA49, &b_mc_gen1_cvweight_NA49);
    fChain->SetBranchAddress("mc_wgt_Flux_BeamFocus_sz", &mc_wgt_Flux_BeamFocus_sz, &b_mc_wgt_Flux_BeamFocus_sz);
    fChain->SetBranchAddress("mc_wgt_Flux_BeamFocus", &mc_wgt_Flux_BeamFocus, &b_mc_wgt_Flux_BeamFocus);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_Tertiary_sz", &mc_wgt_gen1_Flux_Tertiary_sz, &b_mc_wgt_gen1_Flux_Tertiary_sz);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_Tertiary", &mc_wgt_gen1_Flux_Tertiary, &b_mc_wgt_gen1_Flux_Tertiary);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_NA49_sz", &mc_wgt_gen1_Flux_NA49_sz, &b_mc_wgt_gen1_Flux_NA49_sz);
    fChain->SetBranchAddress("mc_wgt_gen1_Flux_NA49", &mc_wgt_gen1_Flux_NA49, &b_mc_wgt_gen1_Flux_NA49);
    fChain->SetBranchAddress("mc_wgt_Norm_sz", &mc_wgt_Norm_sz, &b_mc_wgt_Norm_sz);
    fChain->SetBranchAddress("mc_wgt_Norm", &mc_wgt_Norm, &b_mc_wgt_Norm);
    fChain->SetBranchAddress("mc_wgt_ppfx1_Total_sz", &mc_wgt_ppfx1_Total_sz, &b_mc_wgt_ppfx1_Total_sz);
    fChain->SetBranchAddress("mc_wgt_ppfx1_Total", &mc_wgt_ppfx1_Total, &b_mc_wgt_ppfx1_Total);
    fChain->SetBranchAddress("mc_vertex_batch", &mc_vertex_batch, &b_mc_vertex_batch);
    fChain->SetBranchAddress("prong_part_score", prong_part_score, &b_prong_part_score);
    fChain->SetBranchAddress("prong_part_mass", prong_part_mass, &b_prong_part_mass);
    fChain->SetBranchAddress("prong_part_charge", prong_part_charge, &b_prong_part_charge);
    fChain->SetBranchAddress("prong_part_pid", prong_part_pid, &b_prong_part_pid);
    fChain->SetBranchAddress("prong_part_E", &prong_part_E, &b_prong_part_E);
    fChain->SetBranchAddress("prong_part_pos", &prong_part_pos, &b_prong_part_pos);
    Notify();
}

Bool_t RECOTRACKS_ANA::NuECCQE::Notify()
{
    // The Notify() function is called when a new file is opened. This
    // can be either for a new TTree in a TChain or when when a new TTree
    // is started when using PROOF. It is normally not necessary to make changes
    // to the generated code, but the routine can be extended by the
    // user if needed. The return value is currently not used.

#if 0
    fChain->GetBranch("prong_axis_vector")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_axis_vertex")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_binned_energy_bin_contents")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_binned_energy_bin_indices")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_part_E")->SetMakeClass(kFALSE);
    fChain->GetBranch("prong_part_pos")->SetMakeClass(kFALSE);
#endif


    if (b_prong_axis_vector) b_prong_axis_vector->SetMakeClass(kFALSE);
    if (b_prong_axis_vertex) b_prong_axis_vertex->SetMakeClass(kFALSE);
    if (b_prong_binned_energy_bin_contents) b_prong_binned_energy_bin_contents->SetMakeClass(kFALSE);
    if (b_prong_binned_energy_bin_indices) b_prong_binned_energy_bin_indices->SetMakeClass(kFALSE);
    if (b_prong_part_E) b_prong_part_E->SetMakeClass(kFALSE);
    if (b_prong_part_pos) b_prong_part_pos->SetMakeClass(kFALSE);

    return kTRUE;
}

void RECOTRACKS_ANA::NuECCQE::Show(Long64_t entry)
{
    // Print contents of entry.
    // If entry is not specified, print current entry
    if (!fChain) return;
    fChain->Show(entry);
}
Int_t RECOTRACKS_ANA::NuECCQE::Cut(Long64_t entry)
{
    // This function may be called from Loop.
    // returns  1 if entry is accepted.
    // returns -1 otherwise.
    return 1;
}
#endif // #ifdef NuECCQE_cxx
