#include<stdio.h>
main()
{
    printf("Enter no of levels you want to see in the Pyramid!");
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    {for(j=n-1;j>=i;j--)
        printf(" ");
     for(k=0;k<((2*i)-1);k++)
        printf("*");
     printf("\n");
  }
}
