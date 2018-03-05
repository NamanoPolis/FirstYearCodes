#include<stdio.h>
#include<string.h>
int ccase(char a[]);
main()
{
    printf("Enter the string!\n\t\t");
    char a[50];
    gets(a);
    ccase(a);
}
int ccase(char a[])
{
    int i;
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
    }
    puts(a);
  return 0;
}
