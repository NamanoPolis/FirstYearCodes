#include<stdio.h>
main()
{
printf("Enter the no of rows of pattern you want to see!\t");
int n;
scanf("%d",&n);
int i=1;
while(i<=n)
 {
   int j=1;
   while(j<=i)
   {
   printf("%d",j);
   j++;
   }
   printf("\n");
   i++;
 }
}
