#include<stdio.h>
int main()
{
printf("Enter the number of rows you want to see!");
int n;
scanf("%d",&n);
 int i=1;
 while(i<=n)
 {
 int j=1;
 while(j<=i)
 {
     printf("*");
     j++;
 }
 i++;
 printf("\n");
 }


 return 0;
}
