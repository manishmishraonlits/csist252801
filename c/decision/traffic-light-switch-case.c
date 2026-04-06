/*
Write a C program to simulate a traffic light. The program should take a character input ('r' or 'R' for red, 'y' or 'Y' for yellow and 'g'
 or 'G' for green) and display a message whether to stop, slow down or go.

 Solution using switch case

Date: 17/03/2026
 */

#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter a character([r, y, g] or [R, Y, G]): ");
    scanf("%c", &c);

    switch (c)
    {
    case 'r':
        printf("Stop!");
        break;
    case 'R':
        printf("Stop!");
        break;
    case 'y':
        printf("Slow Down!");
        break;
    case 'Y':
        printf("Slow Down!");
        break;
    case 'g':
        printf("Go!");
        break;
    case 'G':
        printf("Go!");
        break;
    default:
        printf("Invalid!");
    }

    return 0;
}