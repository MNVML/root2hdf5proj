CXX = g++
CXXFLAGS = -g -Wall -fPIC
ROOTFLAGS = `root-config --cflags --glibs`
IDIR = ../include
LDIR = ../lib
INCLUDE += -I$(IDIR) -I../gzstream -I$(HEP_HPC_INC) -I$(HDF5_INC)
LDLIBS += -L$(HDF5_LIB) -lhdf5
LDLIBS += -L$(HEP_HPC_LIB) -lhep_hpc_hdf5
LDLIBS += -L$(LDIR) -lRecoTracks
LDLIBS += -L../gzstream -lgzstream -lz 

LDFLAGS += -shared -Wl,-soname

BINARIES   = hdf5_test \
			 skimmer_root2hdf5 \
			 skimmer_root2hdf5_nueccqe
TARGETS    = hdf5_test.o \
			 skimmer_root2hdf5.o \
			 skimmer_root2hdf5_nueccqe.o

all: $(BINARIES) 

debug: CXXFLAGS += -DDEBUG
debug: all

%.o: %.cxx
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) -c $< -o $@ #compile

hdf5_test: hdf5_test.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

skimmer_root2hdf5: skimmer_root2hdf5.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

skimmer_root2hdf5_nueccqe: skimmer_root2hdf5_nueccqe.o
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) $(LDLIBS) $^ -o $@    #link

clean:
	rm -f $(BINARIES) $(TARGETS)

