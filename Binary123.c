#include<stdio.h>
#include<string.h>
main()
{char rr[100];
 printf("Enter Number!\n");
 int n;
 scanf("%d",&n);
 int t=0,temp,rev=0;
 while(n>0)
 {
  temp=n%2;
  //rev=rev*10+temp;

  rr[t]=(char)temp;
  n=n/2;
  t++;
 }

 printf(" %c",strrev(rr));
// printf("%d\n",rev);
 //int temp1,rev1=0,q=rev;
 //while(q>0)
 //{
  //temp1=q%10;
  //rev1=rev1*10+temp1;
  //q=q/10;
 //}
//printf("The binary equivalent of %d is %d",n,rev1);
}
