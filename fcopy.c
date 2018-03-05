#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp,*fc;
    char namess[50];
char name[100], c;
        printf("Enter the filename!\n");
    scanf("%s",name);
    printf("Enter filename where to copy!\n");
    scanf("%s",namess);
fp = fopen(name, "r");
fc=fopen(namess,"w");
    if (fp == NULL)
    {
        printf("Cannot copy file \n");
        exit(0);
    }
while ((c=fgetc(fp)) != EOF)
    {
        fputc(c,fc);
}
printf("Data Copied!");

    fclose(fp);
    return 0;
}

