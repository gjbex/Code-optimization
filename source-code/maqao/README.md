# Maqao

Maqao is a performance analysis tool for HPC applications. It provides insights
into the performance of your code, helping you identify bottlenecks and
optimize your applications.


## What is it?

1. `saxpy.cpp`: a simple C++ program that performs the SAXPY operation.
1. `Makefile`: a Makefile to build the `saxpy.cpp` program for various
   compilation options.
1. `default.txt`: Maqao output for default compilation.
1. `O1.txt`: Maqao output for compilation with `-O1` optimization.
1. `O2.txt`: Maqao output for compilation with `-O2` optimization.
1. `O3.txt`: Maqao output for compilation with `-O3` optimization.
1. `O3_march.txt`: Maqao output for compilation with `-O3 -march=native`
   optimization.
1. `O3_march_512.txt`: Maqao output for compilation with `-O3 -march=native
   -mprefer-vector-width=512` optimization.

## How to use it?

Running Maqao to do a static analysis of the executables is straightforward,
e.g., for the `default.exe` application:

```bash
$ maqao  fl=saxpy  conf=hint,expert  default.exe
```
