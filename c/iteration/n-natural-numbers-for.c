#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}