#include<stdio.h>
void fibo(long long);
int main()
{
//printf("Enter the no of terms you want to generate:");
long long n=4000000;
//scanf("%d",&n);
fibo(n);
return 0;

}
void fibo(long long n)
{
long long f1=0,f2=1,sum=0;
long long f=0;
long long c=0;
while(f<n)
{
if(c<=1)
{
printf("%lld\n",c);
}
else
{
f=f1+f2;
f1=f2;
f2=f;

if(f%2==0)
sum+=f;

printf("%lld\n",f);
}
c++;
}
printf("\n\n%lld\n\n",sum);
}
