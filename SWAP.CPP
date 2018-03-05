#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("Enter any two numbers:");
int a,b;
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The numbers are %d,%d",a,b);
getch();
}