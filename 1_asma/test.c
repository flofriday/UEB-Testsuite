/**
 * A simple testsuite for the first assignment.
 *
 * If you added additional tests please consider pushing them upstream:
 * https://github.com/flofriday/UEB-Testsuite
 */

#include <stdio.h>
#include <string.h>

/**
 * This is a forward declaration.
 * The body of this function will be your assembly code.
 * But since this test file calls your code it needs this declaration.
 */
void asma(char x[]);

/**
 * This is the reference implementation as found in the assignment,
 * which we will use to compare the results from your implementation.
 */
void asma_controll(char x[])
{
    long i, j;
    for (i = 0, j = 15; i < j; i++, j--)
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
void printAsHex(char text[], int n)
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
 */
void test(char *testname, char *testinput)
{
    // Create mutable copies of the testinput string
    char testdata[16];
    memcpy(testdata, testinput, 16);
    char controlldata[16];
    memcpy(controlldata, testinput, 16);

    // Call both implementations
    asma(testdata);
    asma_controll(controlldata);

    // Compare the results
    if (memcmp(controlldata, testdata, 16) == 0)
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
    printAsHex(testdata, 16);
    printf("\n\tascii: '%.16s'", testdata);
    printf("\n");
    printf("But should have returned: ");
    printf("\n\thex: ");
    printAsHex(controlldata, 16);
    printf("\n\tascii: '%.16s'", controlldata);
    printf("\n\n");
}

int main()
{
    test("Just zeros", "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
    test("Ascii Zeros", "0000000000000000");
    test("A ascii one", "1000000000000000");
    test("Hex String", "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0E\x0F");
    test("Overflow", "123456789ABCDEFGHIJKLMN");
    test("Ascii abc", "ABCDEFGHIJKLMNOP");
    test("Ascii hex", "0123456789abcdef");
    test("Hello World", "Hello World\0\0\0\0\0");
    test("Badly terminated", "visible\0 hidden");
    test("Good boy", "You are a good boy");
    test("Long text", "This is a long text but it doesn't even matter because the test function will truncate it.");
}
