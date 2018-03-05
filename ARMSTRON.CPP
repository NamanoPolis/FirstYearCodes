#include<stdio.h>
#include<conio.h>
main()
{

printf("Enter the number till which you want to generate Armstrong numbers:");
int n;
scanf("%d",&n);
int num,temp,d1,d2,d3;
num=001;
while(num<=n)
{
 d1=num-((num/10)*10);
 d2=(num/10)-((num/100)*10);
 d3=(num/100)-((num/1000)*10);
 temp=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
 if(temp==num)
 printf("%d\n",num);
 num++;
}
getch();
}
