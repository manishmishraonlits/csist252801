#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    char c;
    fp = fopen(argv[1], "w");
    
    while((c = getchar()) != EOF)
    {
        putc(c, fp);
    }
    
    fclose(fp);
    return 0;
}
