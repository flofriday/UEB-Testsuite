# asmb tests

This tests your assembly implementation with the reference C implementation from
the assignment.

You can easily add further tests by modifying `test.c`. If you do, please
consider pushing them upstream with a PR so that other students can benefit from
them 😉

To check that your assignment is in the correct folder you can run the much
smaller testsuite from the LVA with:

```bash
/usr/ftp/pub/ubvl/test/asmb/test
```

## Usage

We assume here that you have already a `asmb.s` assembly file.

1. Copy `test.c` into your project.
2. Compile your assembly file with `gcc -Wall -c -o asmb.o asmb.s`.
3. Compile the tests with `gcc -Wall asmb.o -o test test.c`.
4. Run the tests with `./test`.

PS: Maybe add those commands to your Makefile 😉
