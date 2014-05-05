################################################################################
# Makefile for the EventData interface generator
#
# by André Pereira (LIP-Minho)
################################################################################

SHELL = /bin/sh

TOOL_NAME = EDGen

CXX        = g++
LD         = g++

CXXFLAGS   = -Wall -Wextra

ifeq ($(DEBUG),yes)
	CXXFLAGS += -ggdb3
else
	CXXFLAGS += -O3
endif

#BOOST_PATH = /Users/andre/dev_tools/boost_1_55_0

#CXXFLAGS += -I$(BOOST_PATH) -L$(BOOST_PATH)/stage/lib

################################################################################
# Control awesome stuff
################################################################################

SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build
SRC = $(wildcard $(SRC_DIR)/*.cxx)
OBJ = $(patsubst src/%.cxx,build/%.o,$(SRC))
DEPS = $(patsubst build/%.o,build/%.d,$(OBJ))

vpath %.cxx $(SRC_DIR)

################################################################################
# Rules
################################################################################

.DEFAULT_GOAL = all

$(BUILD_DIR)/%.d: %.cxx
	$(CXX) -M $(CXXFLAGS) $(INCLUDES) $< -o $@

$(BUILD_DIR)/%.o: %.cxx
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) $< -o $@

$(BIN_DIR)/$(TOOL_NAME): $(DEPS) $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

checkdirs:
	@mkdir -p $(BUILD_DIR)
	@mkdir -p $(BIN_DIR)

all: checkdirs $(BIN_DIR)/$(TOOL_NAME)

clean:
	rm -f $(BUILD_DIR)/* $(BIN_DIR)/* 
