#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("Enter the number:");
int n;
scanf("%d",&n);
int sum=0,r;
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("The sum of the digits is %d",sum);
getch();
}