################################################################################
# Make file for LipMiniAnalysis
################################################################################

SHELL = /bin/sh

DEFINES = -Dextname

CXX        = g++
LD         = g++

ROOTCFLAGS    = $(shell $(ROOTSYS)/bin/root-config --cflags)
ROOTLIBS      = $(shell $(ROOTSYS)/bin/root-config --libs)
ROOTGLIBS  = $(shell root-config --glibs) -lMinuit -lHtml -lEG -lPhysics -lTreePlayer


CXXFLAGS   = -Wall -Wextra -Wno-comment -Wno-deprecated-declarations -Wno-sign-compare -O3 -fopenmp $(ROOTCFLAGS)
#CXXFLAGS   = -Wall -Wextra -Wno-comment -Wno-deprecated-declarations -Wno-sign-compare -ggdb3 -fopenmp $(ROOTCFLAGS)

LIBS       = $(ROOTLIBS)
GLIBS      = $(ROOTGLIBS)

INCLUDES = -I$(incdir) -I$(ROOTSYS)/include -I$(ROOTCOREDIR)/include

################################################################################
# Rules
################################################################################

all: lib/libLipMiniAnalysis.a

build/TLorentzVectorWFlags.o: src/TLorentzVectorWFlags.cxx src/TLorentzVectorWFlags.h
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/TLorentzVectorWFlags.cxx -o build/TLorentzVectorWFlags.o

build/Ntu.o: src/Ntu.cxx src/Ntu.h build/TLorentzVectorWFlags.o
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/Ntu.cxx -o build/Ntu.o

build/THisto.o: src/THisto.cxx src/THisto.h
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/THisto.cxx -o build/THisto.o

build/EventData.o: src/EventData.cxx src/EventData.h
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/EventData.cxx -o build/EventData.o

build/TInput.o: src/TInput.cxx src/TInput.h
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/TInput.cxx -o build/TInput.o

build/TMonteCarlo.o: src/TMonteCarlo.cxx src/TMonteCarlo.h build/THisto.o
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/TMonteCarlo.cxx -o build/TMonteCarlo.o

build/MiniTTHReader.o: build/Ntu.o src/MiniTTHReader.cxx src/MiniTTHReader.h
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/MiniTTHReader.cxx -o build/MiniTTHReader.o

build/utilities.o: src/utilities.cxx src/utilities.h
	$(CXX) $(CXXFLAGS) -I$(INCLUDES) -c src/utilities.cxx -o build/utilities.o

build/LipMiniAnalysis.o: src/LipMiniAnalysis.cxx src/LipMiniAnalysis.h build/TLorentzVectorWFlags.o build/Ntu.o build/MiniTTHReader.o build/THisto.o build/TInput.o build/TMonteCarlo.o build/EventData.o build/utilities.o
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c src/LipMiniAnalysis.cxx -o build/LipMiniAnalysis.o

lib/libLipMiniAnalysis.a: build/LipMiniAnalysis.o
	ar -r lib/libLipMiniAnalysis.a \
	build/LipMiniAnalysis.o \
	build/MiniTTHReader.o \
	build/Ntu.o \
	build/TLorentzVectorWFlags.o \
	build/THisto.o build/TInput.o build/TMonteCarlo.o build/EventData.o build/utilities.o

clean:
	rm -f build/*.o lib/libLipMiniAnalysis.a 

# DO NOT DELETE
