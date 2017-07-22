#
# Makefile
#
# Adapted from CS50 Problem Set 5
#


# compiler to use
CC = g++

# flags to pass compiler
CFLAGS = -g -std=c++11 -Wall

# name for executable
EXE = average

# space-separated list of user-defined header files
HDRS = 

# space-separated list of libraries, if any,
# each of which should be prefixed with -l
LIBS =

# space-separated list of source files
SRCS = average.cpp

# default target
$(EXE): $(HDRS) Makefile
	$(CC) $(CFLAGS) -o $@ $(SRCS) $(LIBS)

# housekeeping
clean:
	rm -f $(EXE) *.o
