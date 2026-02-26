/*
WAP to read radius of a circle and find its area.
*/

#include <stdio.h>
#define PI 3.14

float area(float r);

int main(void)
{
    auto float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area is %1.2f sq. units.", area(r));
    return 0;
}

float area(float r)
{
    return PI * r * r;
}