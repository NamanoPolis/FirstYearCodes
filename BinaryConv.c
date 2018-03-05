#include<stdio.h>
int bin(int);
main()
{
    printf("Enter a Number!");
    int n;
    scanf("%d",&n);
    int nu=bin(n);
    printf("The Binary Equivalent Number is:%d",nu);
}
bin(int q)
{
    int ru=0,temp;
    while(q>0)
    {
        temp=q%2;
        ru=ru*10+temp;
        q=q/2;
    }
    int rev=0,temp1;
    while(ru>=1)
    {
        temp=ru%10;
        rev=rev*10+temp1;
        ru=ru/10;
    }
    return ru;
}

