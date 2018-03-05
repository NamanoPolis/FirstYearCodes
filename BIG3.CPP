#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("Enter the three numbers:");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
 if(a>c)
 printf("The biggest no is %d",a);
  else
  printf("The biggest no is %d",c);
}
else if(b>a)
{
if(b>c)
printf("The biggest no is %d",b);
else
printf("The biggest no is %d",c);
}
getch();
}