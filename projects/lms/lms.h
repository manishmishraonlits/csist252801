// ----------- Standard Library -------------------
#include <stdio.h>

// ----------- Book Module ------------------------
typedef struct book
{
    int id;
    char title[50];
    char author[50];
} BOOK;

void newbook();
void newbookform();