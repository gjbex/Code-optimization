CXX=g++
CXXFLAGS=-std=c++17 -Wall -Wextra -g

all: default.exe O1.exe O2.exe O3.exe O3_march.exe O3_march_512.exe

default.exe: saxpy.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

O1.exe: saxpy.cpp
	$(CXX) $(CXXFLAGS) -O1 -o $@ $<

O2.exe: saxpy.cpp
	$(CXX) $(CXXFLAGS) -O2 -o $@ $<

O3.exe: saxpy.cpp
	$(CXX) $(CXXFLAGS) -O3 -o $@ $<

O3_march.exe: saxpy.cpp
	$(CXX) $(CXXFLAGS) -O3 -march=native -o $@ $<

O3_march_512.exe: saxpy.cpp
	$(CXX) $(CXXFLAGS) -O3 -march=native  -mprefer-vector-width=512 -o $@ $<

clean:
	$(RM) $(wildcard *.exe)
