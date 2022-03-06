/**
 * A simple testsuite for the second assignment.
 *
 * If you added additional tests please consider pushing them upstream:
 * https://github.com/flofriday/UEB-Testsuite
 */

#include <assert.h>
#include <stdio.h>
#include <string.h>

/**
 * This is a forward declaration.
 * The body of this function will be your assembly code.
 * But since this test file calls your code it needs this declaration.
 */
void asmb(char x[], int n);

/**
 * This is the reference implementation as found in the assignment,
 * which we will use to compare the results from your implementation.
 */
void asmb_controll(char x[], long n)
{
    long i, j;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        char t = x[i];
        x[i] = x[j];
        x[j] = t;
    }
}

/**
 * A simple helper that will print a chararray as hex values.
 * This is helpful wenn printf fails because the string is null-terminated.
 */
void print_hex(char text[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }

        printf("%02x", text[i]);
    }
}

/**
 * Here is where the magic is happening.
 *
 * @brief This test takes the char array in testdata and passes it to your
 * implementation and the reference implementation and detects if there are
 * any differences. If the the test fails it will print a detailed explaination
 * on why it failed.
 *
 * @details The caller has to make sure testdata is at least 16byte long.
 * Otherwise the functions will access memory outside the buffer.
 *
 * @param testname Every test has a name so that it is easier to figure out
 * exactly which test failed.
 *
 * @param testinput A at least 16byte string with which the implementations will
 * be tested.
 *
 * @param n The number of bytes in the testinput. Should be a muliple of 32.
 */
void test(char *testname, char *testinput, int n)
{
    assert(n % 32 == 0);

    // Create mutable copies of the testinput string
    char testdata[n];
    memcpy(testdata, testinput, n);
    char controlldata[n];
    memcpy(controlldata, testinput, n);

    // Call both implementations
    asmb(testdata, n);
    asmb_controll(controlldata, n);

    // Compare the results
    if (memcmp(controlldata, testdata, n) == 0)
    {
        printf("Test '%s' passed.\n", testname);
        return;
    }

    // Oh no.
    // The test failed.
    // The best thing we can do now is to tell them what it did and what it
    // should do
    printf("Test '%s' failed!\n", testname);
    printf("Your implementation returned:\n\thex: ");
    print_hex(testdata, n);
    printf("\n\tascii: '%.*s'", n, testdata);
    printf("\n");
    printf("But should have returned: ");
    printf("\n\thex: ");
    print_hex(controlldata, n);
    printf("\n\tascii: '%.*s'", n, controlldata);
    printf("\n\n");
}

int main()
{
    test("Empty input", "", 0);
    test("32 Ascii Zeros", "00000000000000000000000000000000", 32);
    test("64 Ascii Zeros", "0000000000000000000000000000000000000000000000000000000000000000", 64);
    test("One Ascii One (32)", "10000000000000000000000000000000", 32);
    test("One Ascii One (64)", "1000000000000000000000000000000000000000000000000000000000000000", 64);
    test("Ascii base32", "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567", 32);
    test("Ascii base64", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", 64);
    test("Long text", "Hey there, I really don't know what to write in theses 128 characters and its late so the qulity is .... not that great. Sorry for that.", 128);
}