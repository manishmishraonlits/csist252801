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

BOOK *getallbooks()
{
    FILE *fp;
    BOOK books[10];
    int i = 0;
    fp = fopen("book.csv", "r");

    while (fscanf(fp, "%[^,],%[^\n]\n", books[i].title, books[i].author) != 1)
    {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);

        if (feof(fp))
        {
            break;
        }
        i++;
    }
    fclose(fp);
    return books;
}

void displayallbook()
{
    BOOK *books = getallbooks();
}