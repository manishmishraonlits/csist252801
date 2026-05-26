#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} DATE;

void read_date(DATE *d);
void print_date(DATE d);


int main(void)
{
    DATE d;
    read_date(&d);
    print_date(d);
}

void read_date(DATE *d)
{
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d->day, &d->month, &d->year);
}

void print_date(DATE d)
{
    char months[12][10] = {"January", "February", "March", "April", "May"};
    printf("%s %d, %d", months[d.month - 1], d.day, d.year);
}

