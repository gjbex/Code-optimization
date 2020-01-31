CXX = g++
CXXFLAGS = -O3

all: ipo_functions.exe

ipo_functions.exe: ipo_functions.o functions.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(wildcard *.o) $(wildcard *.exe)
	$(RM) core $(wildcard core.*)
