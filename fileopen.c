#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
char name[100], c;
        printf("Enter the filename\n");
    scanf("%s",name);
fp = fopen(name, "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
while ((c=fgetc(fp)) != EOF)
    {
        printf ("%c", c);
}

    fclose(fp);
    return 0;
}
