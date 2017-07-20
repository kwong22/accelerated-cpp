#
# Makefile
#
# Adapted from CS50 Problem Set 5
#


# compiler to use
CC = g++

# flags to pass compiler
CFLAGS = 

# name for executable
EXE = calculate_grades

# space-separated list of user-defined header files
HDRS = median.h grade.h Student_info.h

# space-separated list of libraries, if any,
# each of which should be prefixed with -l
LIBS =

# space-separated list of source files
SRCS = calculate_grades.cpp median.cpp grade.cpp Student_info.cpp

# automatically generated list of object files
OBJS = $(SRCS:.c=.o)


# default target
$(EXE): $(OBJS) $(HDRS) Makefile
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

# dependencies 
$(OBJS): $(HDRS) Makefile

# housekeeping
clean:
	rm -f core $(EXE) *.o
