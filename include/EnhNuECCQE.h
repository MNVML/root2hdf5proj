#ifndef ENHNUECCQE_H
#define ENHNUECCQE_H 1

#include "NuECCQE.h"
#include <vector>
#include <string>

// "Enhanced" NuECCQE ...
//
// Add helper methods here so we can re-create the NuECCQE.h with MakeClass
// at any time.
//
// This is bad coding, btw, this is basically copying a class and renaming it;
// should use a different pattern here, but lazy...

namespace RECOTRACKS_ANA {


  class EnhNuECCQE : public NuECCQE {

    public:
      EnhNuECCQE(TTree *t) : 
        NuECCQE(t), m_numberOfBuckets(127),
        m_mostDownstreamModuleInLattice(94),
        m_viewMask(0), m_viewShiftBits(0),
        m_planeMask(0), m_planeShiftBits(0),
        m_moduleMask(0), m_moduleShiftBits(0),
        m_bucketMask(0), m_bucketShiftBits(0) {
          setBitMasksAndShifts();
        };

      virtual ~EnhNuECCQE() {};

      std::string latticePositionIntoString(unsigned int latticepos) const;
      void setNumberOfBuckets(unsigned int numberOfBuckets);
      unsigned int getNumberOfBuckets() const;

      unsigned int getModuleFromLatticePos(unsigned int latticepos) const;
      unsigned int getPlaneFromLatticePos(unsigned int latticepos) const;
      unsigned int getViewFromLatticePos(unsigned int latticepos) const;
      std::string getStringViewFromLatticePos(unsigned int latticepos) const;
      unsigned int getBucketFromLatticePos(unsigned int latticepos) const;

      unsigned int getLatticeIndexForCoords(unsigned int bucket, 
          unsigned int module, unsigned int plane, unsigned int view) const;

      unsigned int getLatticeSize() const;

    private:

      void setBitMasksAndShifts();

      unsigned int m_numberOfBuckets; 
      unsigned int m_mostDownstreamModuleInLattice;

      unsigned int m_viewMask;
      unsigned int m_viewShiftBits;

      unsigned int m_planeMask;
      unsigned int m_planeShiftBits;

      unsigned int m_moduleMask;
      unsigned int m_moduleShiftBits;

      unsigned int m_bucketMask;
      unsigned int m_bucketShiftBits;

  };

} // end namespace


#endif  // ENHNUECCQE_H
