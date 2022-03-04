# asma tests

**Disclaimer:** At the moment there are just three very basic tests but this
should already be enough of a framework to build further tests upon them.

You can easily add further tests by modifying `test.c` and if you do please push
them upstream with a PR so that other students can benefit from them 😉

## Usage

We assume here that you have already a `asma.s` assembly file.

1. Copy `test.c` into your project.
2. Compile your assembly file with `gcc -Wall -c -o asma.o asma.s`.
3. Compile the tests with `gcc -Wall asma.o -o test test.c`.
4. Run the tests with `./test`.

PS: Maybe add those commands to your Makefile 😉
