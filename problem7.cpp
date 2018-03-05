//Prime Machine
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
printf("Enter any number:");
long long int n,i=1;;
scanf("%d",&n);
long long int p=2,coun=0;
while(p<=n)
{
long long int chk=2;
while(chk<p)
{
if(p%chk==0)
break;
chk++;
}
if(chk==p)
{printf("%lld\t%lld\n",p,i++);
    coun++;
}
if(coun==10001)
    {printf("This is 10001st prime Number!");}
p++;
}
getch();
return 0;
}
