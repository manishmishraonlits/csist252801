/*
Write a C program to simulate a traffic light. The program should take a character input ('r' or 'R' for red, 'y' or 'Y' for yellow and 'g'
 or 'G' for green) and display a message whether to stop, slow down or go.

 Solution using else-if ladder

 Date: 17/03/2026
*/

#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter a character([r, y, g] or [R, Y, G]): ");
    scanf("%c", &c);

    if (c == 'r' || c == 'R')
        printf("Stop!");
    else if (c == 'y' || c == 'Y')
        printf("Slow Down!");
    else if (c == 'g' || c == 'G')
        printf("Go!");
    else
        printf("Invalid!");
    return 0;
}