#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter any string!\t");
    char a[50];
    gets(a);
    int l=strlen(a);
    printf("The entered string is %d characters long!",l);

}
