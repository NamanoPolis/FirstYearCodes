
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char c[40];
fp = fopen("write.bin", "wb");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    while (strlen(gets(c))>0)
    {
        fwrite(c,sizeof(c),1,fp);
        fputs("\n",fp);
    }

    fclose(fp);
    return 0;
}
