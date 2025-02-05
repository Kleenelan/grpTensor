



EXES := cutensor_error_string

all: $(EXES)

INC 	 := -I ../../interface -I/usr/local/cuda/include
LD_FLAGS := -L ../../library -lcutensor
%: %.cpp
	$(CXX) $< -o $@ $(INC) $(LD_FLAGS)








.PHONY: clean
clean:
	-rm -rf $(EXES)