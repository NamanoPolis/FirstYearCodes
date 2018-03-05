#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("Enter any two numbers:");
float a,b;
scanf("%f%f",&a,&b);
float sum,diff,prod,quot;
sum=a+b;
diff=a-b;
prod=a*b;
quot=a/b;
printf("The sum is %f,\nThe difference is %f,\nThe product is %f,\nThe quotient is %f",sum,diff,prod,quot);
getch();
}