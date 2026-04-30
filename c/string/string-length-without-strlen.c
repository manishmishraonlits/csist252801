/*
WAP to read a string and find its length without using library function strlen().
*/

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("The string \"%s\" has %d characters.", str, i);

    return 0;
}