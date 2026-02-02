#include <stdio.h>  // File inclusion preprocessor directive
int main()          // main function - starting point
{
    float l, b, a;  // Type declaration
    printf("Enter length: ");
    scanf("%f", &l);
    printf("Enter breadth: ");
    scanf("%f", &b);    
    a = l * b;
    printf("Area is %1.2f sq. units.", a);
    return 0;
}