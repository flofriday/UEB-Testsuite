# asma tests

This tests your assembly implementation with the reference C implementation from
the assignment.

You can easily add further tests by modifying `test.c`. If you do please
consider pushing them upstream with a PR so that other students can benefit from
them 😉

## Usage

We assume here that you have already a `asma.s` assembly file.

1. Copy `test.c` into your project.
2. Compile your assembly file with `gcc -Wall -c -o asma.o asma.s`.
3. Compile the tests with `gcc -Wall asma.o -o test test.c`.
4. Run the tests with `./test`.

PS: Maybe add those commands to your Makefile 😉
