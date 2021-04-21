
CFLAGS = -g -Wall -I../../../cppsrc/. -I../../../csrc/. -I../common/. 
CXXFLAGS = $(CFLAGS)

SRC := $(shell ls ../../../csrc/*.c) $(shell ls ../common/*.c)
CXXSRC := $(shell ls ../../../cppsrc/*.cpp) main.cpp

OBJ = $(SRC:.c=.o) $(CXXSRC:.cpp=.o)

helloworld: $(OBJ) 
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJ) -o helloworld

clean:	
	-rm -f $(OBJ) helloworld

