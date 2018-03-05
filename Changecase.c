#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter the string!\n\t\t");
    char a[50];
    gets(a);
    int i;
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
    }
    puts(a);


}
