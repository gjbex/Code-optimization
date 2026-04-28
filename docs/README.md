In High Performance Computing, performance is a major consideration.
Hence it is important to understand the hardware and software
properties that influence the performance of your applications.
Although this is relevant for software developers, it is also
useful for application users who want to understand the
performance characteristics of the software they use.

## Learning outcomes

When you complete this training you will be able to

  * understand the scaling laws for performance;
  * understand the memory architecture of modern computers;
  * understand vectorization;
  * understand performance pitfalls in shared-memory programming;
  * profile an application using tools such as `gprof` and Arm MAP;
  * use feedback-guided optimization.


## Schedule

Total duration: 7 hours, split over two sessions.

  | Subject                                     | Duration |
  |---------------------------------------------|----------|
  | introduction and motivation                 |  5 min.  |
  | performance scaling and scaling laws        | 45 min.  |
  | computer architecture: memory               | 60 min.  |
  | coffee break                                | 10 min.  |
  | computer architecture: vectorization        | 30 min.  |
  | profiling                                   | 70 min.  |
  | feedback-guided optimization                | 10 min.  |
  | conclusions and wrap-up                     | 10 min.  |


## Training materials

Slides are available in the
 [GitHub repository](https://github.com/gjbex/Code-optimization),
as well as example code and hands-on material.


## Target audience

This training is for you if you want to develop code that efficiently
uses HPC compute infrastructure, or want to tune the parameters of your
application for efficiency.


## Prerequisites

You will need experience programming in some programming language.
This is not a training that teaches programming from scratch.

If you plan to do code optimization in a Linux or HPC environment you should
be familiar with these as well.

More concretely, participants should already be comfortable with the following:

* reading and writing small to medium programs in at least one programming
  language;
* loops, conditionals, functions, arrays, and simple data structures;
* compiling or running programs from the command line at a basic level;
* measuring execution time and comparing two implementations at a basic level;
* reading short shell commands or scripts and adapting them slightly;
* basic HPC concepts such as cores, nodes, parallel jobs, and wall time at a
  user level.

You do not need prior experience with profiling tools such as `gprof`,
Arm MAP, MAQAO, or with feedback-guided optimization, vectorization reports,
or hardware-specific compiler tuning. Those are part of the training itself.

### Quick self-assessment

If you can do most of the tasks below without looking up basic programming or
shell syntax, you are likely ready for this training.

* write a loop that processes an array or list of numbers;
* compare two implementations of the same task by timing how long they take;
* read a short code fragment and identify which part is likely doing most of
  the work;
* compile or run a small program from the command line;
* make a small change to a source file or build command and rerun it;
* understand at a high level why memory access patterns can affect performance;
* understand at a high level why using more cores does not always give linear
  speedup.

If several of these items still feel difficult, the training will probably move
too fast. In that case, it is better to first refresh basic programming and
basic command-line use, and if needed take a short HPC introduction.


## Level of the Material

For participants who already have programming experience, the material in this
training is approximately

* Introductory: 10 %
* Intermediate: 35 %
* Advanced: 55 %

These percentages describe the level of the performance-engineering and code
optimization topics covered in the training, not the required entry level in
programming itself.

## Trainer(s)

  * Geert Jan Bex ([geertjan.bex@uhasselt.be](mailto:geertjan.bex@uhasselt.be))
