#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char c;

    fp = fopen(argv[1], "r");

    while((c = getc(fp)) != EOF)
    {
        putchar(c);
    }

    fclose(fp);
    return 0;
}
