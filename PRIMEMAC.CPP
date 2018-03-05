//Prime Machine
#include<stdio.h>
#include<conio.h>

int main()
{
printf("Enter any number:");
int n;
scanf("%d",&n);
int p=2;
while(p<=n)
{
int chk=2;
while(chk<p)
{
if(p%chk==0)
break;
chk++;
}
if(chk==p)
printf("%d\n",p);
p++;
}
getch();
return 0;
}
