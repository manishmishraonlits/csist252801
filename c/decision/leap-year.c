#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year <= 0)
    {
        printf("Year cannot be zero or negative!");
        return 0;
    }

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    } 
    else
    {
        printf("%d is a common year.", year);
    }
    return 0;
}