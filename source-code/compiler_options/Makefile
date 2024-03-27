CC_GCC = gcc
CC_INTEL = icx

POINTS = 1000
STEPS = 500

EXECUTABLES = heat_gcc.exe heat_O1_gcc.exe heat_O2_gcc.exe heat_O3_gcc.exe \
	heat_O3_native_gcc.exe \
	heat_O3_native_fast-math_gcc.exe \
	heat_O3_native_fast-math_strict-aliasing_gcc.exe \
	heat_intel.exe heat_O1_intel.exe heat_O2_intel.exe heat_O3_intel.exe \
	heat_O3_xHost_intel.exe \
	heat_O3_xHost_fast-math_intel.exe \
	heat_O3_xHost_fast-math_no-alias_intel.exe \
	heat_Ofast_intel.exe


all: $(EXECUTABLES)

heat_gcc.exe: heat.c
	$(CC_GCC) $< -o $@

heat_O1_gcc.exe: heat.c
	$(CC_GCC) -O1 $< -o $@

heat_O2_gcc.exe: heat.c
	$(CC_GCC) -O2 $< -o $@

heat_O3_gcc.exe: heat.c
	$(CC_GCC) -O3 $< -o $@

heat_O3_native_gcc.exe: heat.c
	$(CC_GCC) -O3 -march=native $< -o $@

heat_O3_native_fast-math_gcc.exe: heat.c
	$(CC_GCC) -O3 -march=native -ffast-math $< -o $@

heat_O3_native_fast-math_strict-aliasing_gcc.exe: heat.c
	$(CC_GCC) -O3 -march=native -ffast-math -fstrict-aliasing $< -o $@

heat_intel.exe: heat.c
	$(CC_INTEL) $< -o $@

heat_O1_intel.exe: heat.c
	$(CC_INTEL) -O1 $< -o $@

heat_O2_intel.exe: heat.c
	$(CC_INTEL) -O2 $< -o $@

heat_O3_intel.exe: heat.c
	$(CC_INTEL) -O3 $< -o $@

heat_O3_xHost_intel.exe: heat.c
	$(CC_INTEL) -O3 -xHost $< -o $@

heat_O3_xHost_fast-math_intel.exe: heat.c
	$(CC_INTEL) -O3 -xHost -fp-model=fast $< -o $@

heat_O3_xHost_fast-math_no-alias_intel.exe: heat.c
	$(CC_INTEL) -O3 -xHost -fp-model=fast -fno-alias $< -o $@

heat_Ofast_intel.exe: heat.c
	$(CC_INTEL) -Ofast $< -o $@

benchmark: all
	hyperfine \
		"./heat_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_O1_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_O2_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_O3_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_O3_native_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_O3_native_fast-math_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_O3_native_fast-math_strict-aliasing_gcc.exe $(POINTS) $(STEPS)" \
		"./heat_intel.exe $(POINTS) $(STEPS)" \
		"./heat_O1_intel.exe $(POINTS) $(STEPS)" \
		"./heat_O2_intel.exe $(POINTS) $(STEPS)" \
		"./heat_O3_intel.exe $(POINTS) $(STEPS)" \
		"./heat_O3_xHost_intel.exe $(POINTS) $(STEPS)" \
		"./heat_O3_xHost_fast-math_intel.exe $(POINTS) $(STEPS)" \
		"./heat_O3_xHost_fast-math_no-alias_intel.exe $(POINTS) $(STEPS)" \
		"./heat_Ofast_intel.exe $(POINTS) $(STEPS)"

clean:
	$(RM) $(EXECUTABLES)
