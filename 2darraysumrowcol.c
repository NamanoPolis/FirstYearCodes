#include<stdio.h>
main()
{
     int i,j,a[4][4],sumr=0,sumc=0,sumf=0;
    printf("Enter 9 Numbers!\n");
    for(i=0;i<3;i++)
     for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
     {
      sumr=sumr+a[i][j];
      sumc=sumc+a[j][i];
     }
       a[i][j]=sumr;
       a[j][i]=sumc;
       sumf=sumf+sumr;
       sumr=0;
       sumc=0;
     }

     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
        {
            if(i==3&&j==3)
                a[i][j]=sumf;
            printf("%d\t",a[i][j]);
     }
     printf("\n");
     }

}
