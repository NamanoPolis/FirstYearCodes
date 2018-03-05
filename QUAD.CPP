#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
clrscr();
printf("Enter a,b,c values of Quadratic eqn:");
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
int d=b*b-(4*a*c);
if(d>0)
{
float d2=sqrt(d);
float r1=(-b+d2)/(2*a);
float r2=(-b-d2)/(2*a);
printf("The roots are %f,%f",r1,r2);
}
else if(d==0)
{
float r1=-b/(2*a);
float r2=-b/(2*a);
printf("The roots are %f,%f",r1,r2);
}
else
{
float d2=sqrt(d);
float r1=-b/(2*a),r11=d2/(2*a);
printf("The roots are %f+i%f",r1,r11);
printf("The roots are %f-i%f",r1,r11);
}
getch();
}