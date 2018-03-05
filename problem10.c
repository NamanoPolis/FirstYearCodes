//Prime Machine
#include<stdio.h>
#include<conio.h>

int main()
{
printf("Enter any number:");
long long int n,sum=0;
scanf("%lld",&n);
long long int p=2;
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
{//printf("%lld\n",p);
sum=sum+p;
}p++;
}
printf("\nThe sum is %lld",sum);
getch();

return 0;
}
