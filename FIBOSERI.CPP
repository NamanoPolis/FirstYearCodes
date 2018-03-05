#include<stdio.h>
#include<conio.h>
main()
{

int f1=0,f2=1;
printf("Enter the no of terms you want to generate:");
int n;
scanf("%d",&n);
int f;
int c=0;
while(c<n)
{
if(c<=1)
{
printf("%d\n",c);
}
else
{
f=f1+f2;
f1=f2;
f2=f;
printf("%d\n",f);
}
c++;
}

}
