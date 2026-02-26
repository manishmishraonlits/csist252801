#include <stdio.h>

int add();
int sub();

int main(void)
{
    printf("20 + 10 = %d\n", add());
    printf("20 - 10 = %d\n", sub());
    return 0;
}

int add(void)
{
    return 20 + 10;
}

int sub(void)
{
   return 20 - 10; 
}