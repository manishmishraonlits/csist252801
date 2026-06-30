#include "lms.h"

void newbookform()
{
    BOOK book;
    newbook(&book);
}

void newbook(BOOK *book)
{
    FILE *fp;
    printf("Sizeof book is %d bytes.\n\n", sizeof(book));
    printf("\nThis is new book module and is under construction!\n\n");
}