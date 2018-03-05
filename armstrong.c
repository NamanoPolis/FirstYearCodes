#include<stdio.h>
main()
{

printf("Enter the number you want to check:");
int n;
scanf("%d",&n);
int t=n;
int rev,temp=0;
while(n>0)
{
    rev=n%10;
    temp=temp+(rev*rev*rev);
    n=n/10;
}
if(temp==t)
    printf("The number is Armstrong!");
    else
    printf("The number is not Armstrong!");
}
