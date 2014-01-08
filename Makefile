################################################################################
# Make file for LipMiniAnalysis
#
# by André Pereira (LIP-Minho)
################################################################################

SHELL = /bin/sh

DEFINES = -Dextname

LIB_NAME = LipMiniAnalysis

CXX        = g++
LD         = g++

ROOTCFLAGS = $(shell $(ROOTSYS)/bin/root-config --cflags)
ROOTLIBS   = $(shell $(ROOTSYS)/bin/root-config --libs)
ROOTGLIBS  = $(shell root-config --glibs) -lMinuit -lHtml -lEG -lPhysics -lTreePlayer


CXXFLAGS   = -Wall -Wextra -Wno-comment -Wno-deprecated-declarations -Wno-sign-compare -fopenmp $(ROOTCFLAGS)

ifeq ($(DEBUG),yes)
	CXXFLAGS += -ggdb3
else
	CXXFLAGS += -O3
endif

LIBS  = $(ROOTLIBS)
GLIBS = $(ROOTGLIBS)

INCLUDES = -I$(ROOTSYS)/include

################################################################################
# Control awesome stuff
################################################################################

SRC_DIR = src
LIB_DIR = lib
BUILD_DIR = build
SRC = $(wildcard $(SRC_DIR)/*.cxx)
OBJ = $(patsubst src/%.cxx,build/%.o,$(SRC))
DEPS = $(patsubst build/%.o,build/%.d,$(OBJ))
LIB = $(addsufix .a, $(LIB_NAME))

vpath %.cxx $(SRC_DIR)

################################################################################
# Rules
################################################################################

.DEFAULT_GOAL = all

$(BUILD_DIR)/%.d: %.cxx
	$(CXX) -M $(CXXFLAGS) $(INCLUDES) $< -o $@

$(BUILD_DIR)/%.o: %.cxx
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) $< -o $@

$(LIB_DIR)/$(LIB_NAME): $(DEPS) $(OBJ)
	ar -r $@ $(OBJ)

checkdirs:
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(LIB_DIR)

all: checkdirs $(LIB_DIR)/$(LIB_NAME)

clean:
	rm -f $(BUILD_DIR)/* $(LIB_DIR)/* 
