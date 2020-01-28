CFLAGS = -O2 -g -Wall -Wextra
LDLIBS = -lm

all: branch.exe

%.exe: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)

clean:
	$(RM) *.exe *.o
	$(RM) core core.*
