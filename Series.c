#include<stdio.h>
#include<math.h>
main()
{
printf("Enter the number of terms!\n\t\t\t\t");
float n;
scanf("%f",&n);
float i=1,sum=0;
int p=2;
while(i<=n)
 {
   sum=sum+pow(-1,p)*(1/i);
   p++;
   i++;
 }
 printf("The sum of the series is %f",sum);
}
