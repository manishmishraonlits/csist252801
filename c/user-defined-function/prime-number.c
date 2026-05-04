#include <stdio.h>

int count_factors(int n);   // Function declaration or prototype

// Function definition
int main(void)
{
    int n;
    printf("Enter a number: ");     // function call to library function
    scanf("%d", &n);                // funciton call to library function

    if (count_factors(n) == 2)      // funciton call to user-defined function
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    return 0;
}

// Funciton definition
int count_factors(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}