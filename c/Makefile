# Generic "Makefile" that works for most programs (change as indicated in comments).
# Usage: The Linux command "make" efficiently creates your executable.
# To switch to a debug version, type "make clean", then "make SPECIAL=-g".
# To switch back to optimized, type "make clean", then "make".

# Name of the (main) program
PROG    = problem3

# List header files here
#HEADERS = hello.h

# List each .c file in the project
SOURCES = problem.c

# Compiler options; I strongly suggest that you use all of these!!!
CFLAGS  = -c -Wall -Wpointer-arith -Wcast-qual -Wcast-align -Wstrict-prototypes -pedantic

# This assumes that you want optimization; change if needed, e.g., to -g for the debugger
SPECIAL = -O3

# Set this to whatever libraries are needed
#LIBS    = -lgsl -lgslcblas -lm 

# Makes object names from source names
OBJECTS = $(SOURCES:.c=.o)

# This section makes the executaable
$(PROG) : $(OBJECTS)
	gcc $(SPECIAL) -o $(PROG) $(OBJECTS) $(LIBS)

# This section makes object files from source files
%.o : %.c $(HEADERS)
	gcc $(SPECIAL) $(CFLAGS) $<

# You can use "make clean" to remove the object files, e.g., to recompile everything
clean : 
	rm $(OBJECTS)

