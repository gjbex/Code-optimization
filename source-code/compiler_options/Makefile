CC = gcc
POINTS = 1000
STEPS = 500

EXECUTABLES = heat.exe heat_O1.exe heat_O2.exe heat_O3.exe \
	heat_O3_native.exe \
	heat_O3_native_fast-math.exe \
	heat_O3_native_fast-math_strict-aliasing.exe

all: $(EXECUTABLES)

heat.exe: heat.c
	$(CC) $< -o $@

heat_O1.exe: heat.c
	$(CC) -O1 $< -o $@

heat_O2.exe: heat.c
	$(CC) -O2 $< -o $@

heat_O3.exe: heat.c
	$(CC) -O3 $< -o $@

heat_O3_native.exe: heat.c
	$(CC) -O3 -march=native $< -o $@

heat_O3_native_fast-math.exe: heat.c
	$(CC) -O3 -march=native -ffast-math $< -o $@

heat_O3_native_fast-math_strict-aliasing.exe: heat.c
	$(CC) -O3 -march=native -ffast-math -fstrict-aliasing $< -o $@

bennchmark: all
	hyperfine \
		"./heat.exe $(POINTS) $(STEPS)" \
		"./heat_O1.exe $(POINTS) $(STEPS)" \
		"./heat_O2.exe $(POINTS) $(STEPS)" \
		"./heat_O3.exe $(POINTS) $(STEPS)" \
		"./heat_O3_native.exe $(POINTS) $(STEPS)" \
		"./heat_O3_native_fast-math.exe $(POINTS) $(STEPS)" \
		"./heat_O3_native_fast-math_strict-aliasing.exe $(POINTS) $(STEPS)"

clean:
	$(RM) $(EXECUTABLES)
