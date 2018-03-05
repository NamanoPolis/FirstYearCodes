#include<stdio.h>
#include<string.h>
main()
     {
         printf("Enter number of names you are going to enter!\t");
         int n;
         scanf("%d",&n);
         char a[100][10];
         int j;
         printf("Enter Any %d Random Names!!!\n\t\t",n);
         for(j=0;j<n;j++)
         scanf("%s",&a[j]);
         printf("Enter the name you want to search!\n\t\t");
         char srch[10];
         scanf("%s",&srch);
         int i,f;
         for(i=0;i<n;i++)
         {
             if((strcmp(srch,a[i]))==0)
                { f=1;
                break;}
         }
         if(f==1)
            printf("\nSuccess,Found the name!");
            else
                printf("\nFailure,Couldn't find the name!");
     }
