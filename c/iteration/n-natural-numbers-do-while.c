#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);
    do
    {
        printf("%d ", i);
        i++;
    }
    while (i <= n);
    
    return 0;
}