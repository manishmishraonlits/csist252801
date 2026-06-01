#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct census
{
    char name[30];
    int population;
    float literacy;
} CENSUS;

void drawline(int n);
void read(CENSUS *city);
void display(CENSUS *city);
void display_alphabetically(CENSUS *city);
void display_population(CENSUS *city);
void display_literacy(CENSUS *city);

int main(void)
{
    CENSUS city[MAX];
    read(city);
    display_alphabetically(city);
    display_population(city);
    display_literacy(city);
}

void read(CENSUS *city)
{
    printf("Enter details of %d cities below:\n", MAX);
    for (int i = 0; i < MAX; i++)
    {
        printf("City # %d\n", i + 1);
        printf("Name: ");
        scanf("%[^\n]", city[i].name);
        printf("Population: ");
        scanf("%d", &city[i].population);
        printf("Literacy Rate: ");
        scanf("%f%*c", &city[i].literacy);
    }
}

void display_alphabetically(CENSUS *city)
{
    printf("\nList of cities name wise\n");

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (strcmp(city[i].name, city[j].name) > 0)
            {
                CENSUS temp = city[i];
                city[i] = city[j];
                city[j] = temp;
            }
        }
    }
    display(city);
}

void display_population(CENSUS *city)
{
    printf("\nList of cities population wise\n");

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (city[i].population < city[j].population)
            {
                CENSUS temp = city[i];
                city[i] = city[j];
                city[j] = temp;
            }
        }
    }
    display(city);
}

void display_literacy(CENSUS *city)
{
    printf("\nList of cities literacy rate wise\n");

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (city[i].literacy < city[j].literacy)
            {
                CENSUS temp = city[i];
                city[i] = city[j];
                city[j] = temp;
            }
        }
    }
    display(city);
}

void display(CENSUS *city)
{
    const int linesize = 45;
    drawline(linesize);
    printf("%-15s%15s%15s\n", "Name", "Population", "Literacy Rate");
    drawline(linesize);
    for (int i = 0; i < MAX; i++)
        printf("%-15s\t%15d\t%15.2f\n", city[i].name, city[i].population, city[i].literacy);

    drawline(linesize);
}

void drawline(int n)
{
    for (int i = 1; i <= n; i++)
        printf("-");

    printf("\n");
}

/*
 *   Test Cases
 *   -------------
 *   1.
 *   name: Patna
 *   population: 5772804
 *   literacy: 72.47
 *
 *   2.
 *   name: Muzaffarpur
 *   population: 3960901
 *   literacy: 65.68
 *
 *   3.
 *   name: Kishangnaj
 *   population: 1349005
 *   literacy: 57.04
 *
 *   4.
 *   name: Darbhanga
 *   population: 3220979
 *   literacy: 58.26
 *
 *   5.
 *   name: Gaya
 *   population: 1849422
 *   literacy: 66.35
 */

/*
Patna
5772804
72.47
Muzaffarpur
3960901
65.68
Kishangnaj
1349005
57.04
Darbhanga
3220979
58.26
Gaya
1849422
66.35
*/