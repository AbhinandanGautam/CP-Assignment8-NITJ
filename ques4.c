#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fptr = fopen("Q4file1.txt", "r");
    if (fptr == NULL)
    {
        printf("Could not open files");
        exit(0);
    }
    FILE *ftemp = NULL;
    int c = 0;
    ftemp = fopen("Q4temp.txt", "w");
    if (ftemp == NULL)
    {
        printf("Error in creating tmp file\n");
        fclose(fptr);
        exit(0);
    }

    while ((c = fgetc(fptr)) != EOF)
    {
        c = (isupper(c)) ? tolower(c) : toupper(c);
        fputc(c, ftemp);
    }

    fclose(fptr);
    fclose(ftemp);

    return 0;
}