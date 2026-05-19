#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    printf("Enter a number: ");
    scanf("%d", p);

    printf("The entered value id %d.", *p);
    free(*p);
    return 0;
}