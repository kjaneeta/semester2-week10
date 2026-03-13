# Task 1

This task involves timing the execution of various programs using the Linux
`time` utility.

## `lower.c`

This program reads text from a file, transforming any uppercase characters
into lowercase and writing these to a new file. Names for the input and
output files must be provided on the command line.

We have also provided the text of Leo Tolstoy's famously lengthy novel
"War And Peace", for you to use with this program.

1. Briefly examine the contents of `war_and_peace.txt`.

2. Compile the program with `make lower`, then time its execution on the
   file with

       time ./lower war_and_peace.txt tmp.txt

   Make a note of the times that you see.

3. Briefly examine `tmp.txt` to verify that the operation has been performed
   correctly, then remove this file.

4. The same task can actually be performed the standard character translation
   utility of Linux systems, `tr`. Try this out now:

       time tr A-Z a-z < war_and_peace.txt > tmp.txt

   As before, check the contents of `tmp.txt` and then remove the file.

## `sines.c`

This program invokes `sin()` from the C math library a very large number of
times, summing the values that are returned.

1. Examine the source code of `sin_sum.c`.

2. Compile the program with `make sines`, then time its execution with

       time ./sines

   Make a note of the times that you see.

## `multiply.c`, `matrix.c`, `matrix.h`

The files `matrix.h` and `matrix.c` define a data structure and related
operations for working with 2D matrices. The file `multiply.c` contains a
program that creates two large (1000 rows x 1000 columns) matrices, fills them
with random values, then multiplies them together.

1. Examine the source code.

2. Compile the program with `make multiply`, then time its execution with

       time ./multiply

   Make a note of the times that you see.
