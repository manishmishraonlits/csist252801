#include "lms.h"

void newbookform()
{
    BOOK book;
    printf("Enter book details:\n");
    printf("Title: ");
    scanf("%[^\n]%*c", book.title);
    printf("Author: ");
    scanf("%[^\n]", book.author);
    newbook(&book);
}

void newbook(BOOK *book)
{
    FILE *fp;
    fp = fopen("book.csv", "a");
    fprintf(fp, "%s,", book->title);
    fprintf(fp, "%s\n", book->author);
    fclose(fp);
    printf("\nData Saved!\n\n");
}