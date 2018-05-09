#define EnhNuECCQE_cxx
#include "EnhNuECCQE.h"
#include <TMath.h>
#include <iostream>
#include <map>
#include <sstream>


#define DEBUG_LEVEL 50

using namespace RECOTRACKS_ANA;


//----------------------------------------------------------------------------
void EnhNuECCQE::setNumberOfBuckets(unsigned int numberOfBuckets) 
{
    m_numberOfBuckets = numberOfBuckets;
    setBitMasksAndShifts();
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getNumberOfBuckets() const 
{
    return m_numberOfBuckets;
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getLatticeSize() const
{
    // there are 208 planes in Minerva
    // by default, we use only 188 of them (99 modules - 5 targets, times 2
    // planes per module).
    // here, `m_mostDownstreamModuleInLattice` + 5 == number of modules, but
    // then we must subtract 5 for the five passive targets (water target is
    // not a module) such that `m_mostDownstreamModuleInLattice` * 2 == planes
    // in the lattice.
    // 
    // this should also equal `lattice_indices_sz`, etc. in the NuECCQE base
    return (unsigned int)(m_numberOfBuckets *
            m_mostDownstreamModuleInLattice * 2);
}

//----------------------------------------------------------------------------
std::string EnhNuECCQE::latticePositionIntoString(unsigned int latticepos) const
{
    std::stringstream ss;
    ss
        << "; module+5 = " << ((latticepos & m_moduleMask) >> m_moduleShiftBits)
        << "; plane = "    << ((latticepos & m_planeMask)  >> m_planeShiftBits)
        << "; bucket = "   << ((latticepos & m_bucketMask) >> m_bucketShiftBits)
        << "; view =  "    << ((latticepos & m_viewMask)   >> m_viewShiftBits);
    std::string s = ss.str();
    return s;
}

//----------------------------------------------------------------------------
void EnhNuECCQE::setBitMasksAndShifts()
{
    m_viewShiftBits = 0;
    m_viewMask = (0x3 << m_viewShiftBits);

    m_planeShiftBits = 2;
    m_planeMask = (0x3 << m_planeShiftBits);

    m_moduleShiftBits = 4;
    m_moduleMask = (0x7F << m_moduleShiftBits);

    m_bucketShiftBits = 11;
    unsigned int larger_power_of_two = 2;
    while (larger_power_of_two < m_numberOfBuckets) {
        larger_power_of_two *= 2;
    }
    larger_power_of_two -= 1;   // we want, e.g., b1111, not b10000
    m_bucketMask = (larger_power_of_two << m_bucketShiftBits);
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getModuleFromLatticePos(unsigned int latticepos) const
{
    return (latticepos & m_moduleMask) >> m_moduleShiftBits;
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getPlaneFromLatticePos(unsigned int latticepos) const
{
    return (latticepos & m_planeMask) >> m_planeShiftBits;
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getViewFromLatticePos(unsigned int latticepos) const
{
    return (latticepos & m_viewMask) >> m_viewShiftBits;
}

//----------------------------------------------------------------------------
std::string EnhNuECCQE::getStringViewFromLatticePos(unsigned int latticepos) const
{
    unsigned int view = getViewFromLatticePos(latticepos);
    if (0 == view) {
        return "X";
    }
    else if (1 == view) {
        return "U";
    }
    else if (2 == view) {
        return "V";
    }
    return "Unknown";
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getBucketFromLatticePos(unsigned int latticepos) const
{
    return (latticepos & m_bucketMask) >> m_bucketShiftBits;
}

//----------------------------------------------------------------------------
unsigned int EnhNuECCQE::getLatticeIndexForCoords(unsigned int bucket,
        unsigned int module, unsigned int plane, unsigned int view) const
{
    unsigned int idx = 0;
    idx |= (view << m_viewShiftBits);
    idx |= (plane << m_planeShiftBits);
    idx |= (module << m_moduleShiftBits);
    idx |= (bucket << m_bucketShiftBits);

    return idx;
}

