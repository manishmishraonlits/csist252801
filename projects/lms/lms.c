#include "lms.h"

int main(void)
{
    int ch;
    printf("LIBRARY MANAGEMENT SYSTEM\n");
    printf("--------------------------\n");
    do
    {
        printf("\nMAIN MENU\n");
        printf("----------------------------\n");
        printf("1. Add New Book\n");
        printf("2. View all books\n");
        printf("Enter choice [0 to exit]: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            printf("Bye!");
            return 0;
        case 1:
            newbook();
            break;
        default:
            printf("\nInvalid Input!\n\n");
        }
    } while (1);
}