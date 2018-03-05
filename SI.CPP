#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("Enter principle:");
float p;
scanf("%f",&p);
printf("Enter rate:");
float r;
scanf("%f",&r);
printf("Enter time:");
float t;
scanf("%f",&t);
float si=(p*r*t)/100;
printf("The SI is %f",si);
getch();
}