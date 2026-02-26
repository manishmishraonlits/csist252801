/*

2. Get the C version in use

Write a C program to get the C version you are using.
Expected Output:

We are using C18!

*/


#include <stdio.h>

int main() {
    printf("We are using C%d!\n", __STDC_VERSION__ / 100);
    return 0;
}