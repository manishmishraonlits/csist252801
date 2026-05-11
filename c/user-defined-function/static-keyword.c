#include <stdio.h>

int incn();

int main(void)
{
    int n;
    for (int i = 1; i <= 5; i++)
        n = incn();

    printf("i = %d", n);
    return 0;
}

int incn()
{
    static int n;
    return ++n;
}