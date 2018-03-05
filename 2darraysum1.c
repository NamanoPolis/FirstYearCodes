#include<stdio.h>
main()
{
     int i,j,a[4][3],sum=0;
    printf("Enter 8 Numbers!\n\t\t");
    for(i=0;i<4;i++)
     for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<4;i++)
     {
         for(j=0;j<2;j++)
     {
      sum=sum+a[i][j];
     }
       a[i][j]=sum;
       sum=0;
     }

     for(i=0;i<4;i++)
     {
         for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
     }
     printf("\n");
     }

}
