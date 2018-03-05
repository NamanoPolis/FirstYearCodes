//MATRIX MULTIPLICATION
#include<stdio.h>
main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;

    //Matrix 1
    printf("Enter the contents of 1st Matrix!!!\n");
    for(i=0;i<3;i++)
       {

        for(j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
         }
             printf("\n");
       }

       //Matrix 2
       printf("Enter the contents of 2nd Matrix!!!\n");
    for(i=0;i<3;i++)
       {

        for(j=0;j<3;j++)
         {
             scanf("%d",&b[i][j]);
         }
             printf("\n");
       }

      //Matrix 3
      for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        c[i][j]=0;

      //Multiplication
      for(i=0;i<3;i++)
        for(j=0;j<3;j++)
         for(k=0;k<3;k++)
          c[i][j]=c[i][j]+a[i][k]*b[k][j];

      //Displaying Matrix 3
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {;
              printf("%-10d",c[i][j]);
          }
               printf("\n");
      }

}
