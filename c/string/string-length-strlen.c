/*
WAP to read a string and find its length using library function strlen().
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int len = strlen(str);

    printf("The string \"%s\" has %d characters.", str, len);

    return 0;
}