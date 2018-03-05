#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
clrscr();
printf("Enter the sides of the triangle:");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
float s;
s=(a+b+c)/2;
float ss=s*(s-a)*(s-b)*(s-c);
float ar;
ar=sqrt(ss);
printf("The area of the triangle is %f",ar);
getch();
}