CXX = g++
CXXFLAGS = -g -Wall -fPIC
ROOTFLAGS = `root-config --cflags --glibs`
CFLAGS = -Wall -fPIC
OBJS = RecoTracksUtils.o NukeCC.o EnhNukeCC.o NuECCQE.o EnhNuECCQE.o
IDIR = ../include
SRC = ../src/*.cxx
INCLUDE += -I$(IDIR) 
LDFLAGS += -shared -Wl,-soname
LDLIBS  += -lTreePlayer 

TARGET = libRecoTracks.so

$(TARGET): $(OBJS) $(ROOTDICTCXX)
	$(CXX) $(LDFLAGS),$(TARGET) -o $(TARGET) $(OBJS) $(ROOTFLAGS) $(LDLIBS)
	if [ ! -d ../lib ]; then mkdir ../lib; fi
	ln -sf ../src/$(TARGET) ../lib/$(TARGET)

$(OBJS): %.o: %.cxx ../include/%.h
	$(CXX) $(INCLUDE) $(CXXFLAGS) $(ROOTFLAGS) -c $< -o $@ 


clean:
	rm -f *.o
	rm -f $(TARGET)
	rm -f ../lib/$(TARGET)
