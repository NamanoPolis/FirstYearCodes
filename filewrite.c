#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char c[40];
fp = fopen("write.txt", "w");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    while (strlen(gets(c))>0)
    {
        fputs(c,fp);
        fputs("\n",fp);

}

    fclose(fp);
    return 0;
}
