#include<stdio.h>
main()
{
 printf("Enter 10 Numbers!\n\n\t\t");
 int summer[10],w;
 for(w=0;w<10;w++)
 {
     scanf("%d",&summer[w]);
 }
 int sum=0;
 int i;
 for(i=0;i<10;i++)
{
 sum=sum+summer[i];
}
printf("The sum is %d!",sum);
}
