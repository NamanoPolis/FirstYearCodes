#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter any String\n\n\t");
    char a[50],b[50];
    scanf("%s",a);
    strcpy(b,strrev(a));
    strrev(a);
    if(strcmp(a,b)==0)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
