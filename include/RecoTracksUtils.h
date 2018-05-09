#ifndef RECOTRACKSUTILS_h
#define RECOTRACKSUTILS_h 1

// #include "EnhRecoTracks.h"
// #include "EnhMLVFSamplePrepTool.h"
// #include "MLVertexReco.h"
// #include "RecoTracksTruth.h"
#include "RecoTracksGetFiles.h"
// below is the wrapped "raw" MakeClass output, with array lengths fixed
#include "EnhNukeCC.h"
#include "EnhNuECCQE.h"

//#include "PlotUtils/MnvH1D.h"

//using namespace PlotUtils;

namespace RECOTRACKS_ANA{
    class RecoTracksUtils {

        typedef std::map<std::string,std::vector<double>*> StrVecMap;

        public:

        //! Default Constructor
        RecoTracksUtils();

        //! Default Destructor
        ~RecoTracksUtils();

        //! singleton gettor
        static RecoTracksUtils& Get();

        // Some units
        static constexpr double numi_beam_angle_rad =  -0.05887;
        //Minervaunits::M_mu
        static constexpr double M_mu    = 105.6583;
        static constexpr double M_p     = 938.272013;
        static constexpr double M_n     = 939.56536; 

        static constexpr double target1_z = 4481.21;
        static constexpr double target2_z = 4702.29;
        static constexpr double target3_z = 4923.36;
        static constexpr double target4_z = 5644.91;
        static constexpr double target5_z = 5777.55;

        // target 4 has extra trouble "capturing" vertices in neighboring planes.
        static constexpr double target1_thickestW = 25.75;
        static constexpr double target2_thickestW = 25.75;
        static constexpr double target3_thickestW = 76.3;
        static constexpr double target4_thickestW = 28.0;   // 8.0 *see comment
        static constexpr double target5_thickestW = 13.0;

        // these numbers are set to match explicitly 
        // the numbers used in the NukeCC macros
        static constexpr double target1_up_trk = 4437.83;
        static constexpr double target1_dn_trk = 4543.26;
        //
        static constexpr double target2_up_trk = 4658.9;
        static constexpr double target2_dn_trk = 4764.33;
        //
        static constexpr double target3_up_trk = 4879.98;
        static constexpr double target3_dn_trk = 5029.62;
        //
        static constexpr double target4_up_trk = 5601.52;
        static constexpr double target4_dn_trk = 5706.95;
        //
        static constexpr double target5_up_trk = 5734.17;
        static constexpr double target5_dn_trk = 5857.6;

        private:

        static constexpr double POT_per_MC_file = 1.0e+17;

        // Keep a count of the Data and MC pot after the first call
        bool loaded_pot_mc;
        double global_pot_mc;

        public:

        void   getPOT( double& total_pot_mc, bool single_nu_mc = true );
        void   writePOT( TFile *f );
        double getPOTMC( bool single_nu_mc = true );

        TChain* getMCTree(std::string name = "RecoTracks",
                const std::string& file_name = "file.txt",
                int files_to_read = 0,
                bool calc_POT = true );

        //! Get the target located at z
        /*!
          Return the target located at z, where the width of the target is taken
          to be the widest point. By default, include an extra tolerance equal
          to the width of a scintillator plane on the upstream (negative z) side
          and twice the width of a scintillator plane on the downstream (positive z)
          side. If there are two targets within tolerance, it is equivalent to 
          finding no targets. If no target is found, return 0.

          Note, I've empirically discovered when looking vertices "within" the
          targets using one scintillator plane upstream and two  downstream that
          the nominal thickness is a bit too "thin" to reliably capture the 
          downstream scintillator as a function of _z_. Therefore, the tolerances
          are "blown up" by 6 mm in each direction.

          @return The integer number of the target.
          */
        int getTargetForZPosition(double z, double extraToleranceUp=23.0, 
                double extraToleranceDown=40.0, bool useNukeCCZdefs=true) const;

        //! Get the "z-segment" located at z
        /*!
          Return the target located at z, where the width of the target is taken
          to be the widest point. By default, include an extra tolerance equal
          to the width of a scintillator plane on the upstream (negative z) side
          and twice the width of a scintillator plane on the downstream (positive z)
          side. If there are two targets within tolerance, it is equivalent to 
          finding no targets. If no target is found, return a numerical code that
          indicates whether we are between a given set of targets

             1       2       3       4       5      target
             |       |       |       |       |
          0  |   6   |   7   |   8   |   9   |  10  segment code
             |       |       |       |       |

          Note, the segment coding looks a bit funny - this is because for
          convenience with the ML frameworks, it is best to have a 0-start for
          the segment values, but I still want to leave the targets proper
          with segment numbers equal to the target.

          Note, I've empirically discovered when looking vertices "within" the
          targets using one scintillator plane upstream and two  downstream that
          the nominal thickness is a bit too "thin" to reliably capture the 
          downstream scintillator as a function of _z_. Therefore, the tolerances
          are "blown up" by 6 mm in each direction.

          @return The integer number of the segment.
          */
        int getSegmentForZPosition(double z, double extraToleranceUp=23.0, 
                double extraToleranceDown=40.0, bool useNukeCCZdefs=true) const;

        //! Get the "plane-id code" for an MC event
        /*!
          The code is computed as:
            truth_targetID + (truth_vtx_plane >> 3) + ((truth_vtx_module + 5) >> 4)
          and then converted to an evenly spaced increasing value in the order of
          incidence in the detector.

          @return The integer code value.
          */
        int getPlaneIdCode(const EnhNukeCC* mc) const;

        //! fill pdgs and energies vectors _in step_
        void getFSParticles(const EnhNukeCC* mc,
                std::vector<int>& pdgs,
                std::vector<double>& energies) const;
        void getFSParticles(const EnhNuECCQE* mc,
                std::vector<int>& pdgs,
                std::vector<double>& energies) const;

        //! convert run, subrun, gate, and slice/phys num into 'eventid'
        /*!
          Return the unique eventid for run/sub/gate/slice.

          @return uint64_t value.
          */
        uint64_t computeEventId(int run, int subrun, int gate, int slice);
        /*!
          Return the unique eventid for run/sub/gate/slice. -> But, produce part of
          the 32-bit decomposition into two numbers... the "first" part is run+slc

          @return uint32_t value.
          */
        uint32_t computeEventId32a(int run, int slice);
        /*!
          Return the unique eventid for run/sub/gate/slice. -> But, produce part of
          the 32-bit decomposition into two numbers... the "second" part is sub+gate

          @return uint32_t value.
          */
        uint32_t computeEventId32b(int subrun, int gate);

        private:

        void setPOTMC( TChain *mc, const std::string& name );
        void setPOTData( TChain *data );
        std::vector< std::string > split_line( std::string line, const char* split_var );
        int convertPlaneCode(int raw_code) const;
    };
}
#endif
