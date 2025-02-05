
include make.src.cutensor

OBJ_CPP := $(SRC_CPP:.cpp=.cpp.o)

OBJ_MG_CPP := $(SRC_MG_CPP:.cpp=.cpp.o)

LIB_CUTENSOR := libcutensor.so.2.0.0
LIB_CUTENSOR_MG := libcutensorMg.so.2.0.0

LIBS := $(LIB_CUTENSOR) $(LIB_CUTENSOR_MG)

all: $(LIB_CUTENSOR)

CXX 	 := clang++
INC 	 := -I/usr/local/cuda/include
LD_FLAGS := -L/usr/local/cuda/lib64 -lcublas -lcublasLt

%.cpp.o: %.cpp
	$(CXX) -fPIC -c $< -o $@ $(INC)

$(LIB_CUTENSOR): $(OBJ_CPP)
	$(CXX) -shared $^ -o $@ $(LD_FLAGS)

$(LIB_CUTENSOR_MG): $(OBJ_MG_CPP)
	$(CXX) -shared $^ -o -$@ $(LD_FLAGS) -lcutensor


.PHONY: clean
clean:
	-rm -rf $(OBJ_CPP) $(OBJ_MG_CPP) $(LIBS)

