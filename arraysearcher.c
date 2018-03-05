#include<stdio.h>
#include<string.h>
main()
     {
         printf("Enter value of n\t");
         int n;
         scanf("%d",&n);
         int a[n],j;
         printf("Enter Random Numbers!!!\n\t\t");
         for(j=0;j<n;j++)
         scanf("%d",&a[j]);
         printf("Enter the number you want to search!\n\t\t");
         int t;
         scanf("%d",&t);
         int i,f;
         for(i=0;i<n;i++)
         {
             if(a[i]==t)
                { f=1;
                break;}
         }
         if(f==1)
            printf("\nSuccess,Found the number!");
            else
                printf("\nFailure,Couldn't find the number!");
     }
