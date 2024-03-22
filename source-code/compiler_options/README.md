# Compiler options

Experiment to test the influence of various compiler options for optimization
on performance.


## What is it?

1. `heat.c`: implementation of a simple solver for the stationary Poisson
   equation with Dirichlet boundary conditions.
1. `Makefile`: make file that builds various versions of the executable with
   different compiler options (GCC) and runs benchmarks.


## How to use

Simply run:

```bash $ make benchmark ```

**Note:** you should have [`hyperfine`](https://github.com/sharkdp/hyperfine)
installed.
