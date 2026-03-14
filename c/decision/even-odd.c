/*
WAP to read an integer and find whether it is even or odd.
Date: 11/03/2026
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even!");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
