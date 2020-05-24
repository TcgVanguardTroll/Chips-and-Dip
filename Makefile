# These variables configure the build.
# We want to use gcc, of course.
CC := gcc
# These CFLAGS are reasonable for a debugging build for C99.
CFLAGS := -g -Wall  -O -std=c99 -D_DEFAULT_SOURCE
# This variable is used to link libraries to tests; you almost certainly
# don't need it, but it's here in case you do.  We'll help you use it on
# Piazza, if you need it.
LDFLAGS :=

# This removes stuff that we don't want, and makes sure to remove any
# compiled outputs that might need to be cleaned up to ensure a full
# build.
clean:
	rm -f *~ Chip-8/*~ Chip-8/*.o

# This is the first rule in the file, so it's what runs when you type
# make with no arguments.  It will build list.o and validate.o, which
# makes sure your code compiles, but doesn't do anything to test it.
all: Chip-8/chip8mem.o