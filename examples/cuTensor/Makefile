
EXE := contraction cutensor_error_string
all: $(EXE)

#INC := -I /usr/include -I /usr/local/cuda/inclue
%: %.cpp
	g++ $< -o $@ $(INC) $(LD_FLAGS)

INC := -I /usr/include -I /usr/local/cuda/include

LD_FLAGS := -L /usr/lib/x86_64-linux-gnu/ -lcutensor -L /usr/local/cuda/lib64 -lcudart

.PHOHY: clean
clean:
	-rm -rf $(EXE)
