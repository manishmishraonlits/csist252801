#include <stdio.h>

int main(void)
{
    int a, b, c, x;
    // Use case 1
    a = 250;
    b = 85;
    c = 25;

    x = a / (b - c);
    printf("Test Case 1: x = %d\n", x);
    // Use case 2
    a = 300;
    b = 70;
    c = 70;
    x = a / (b - c);
    printf("Test Case 2: x = %d\n", x);
    printf("Aal is well!");
    return 0;
}