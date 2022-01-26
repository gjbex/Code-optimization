CXX = g++
CXXFLAGS = -O3

all: pure_functions.exe

pure_functions.exe: pure_functions.o functions.o
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	$(RM) $(wildcard *.o) $(wildcard *.exe)
	$(RM) core $(wildcard core.*)
