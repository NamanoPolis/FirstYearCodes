#include<stdio.h>
#include<time.h>
int main()
{   int n,a[20],i,j;
    clock_t start,end;
    printf("Enter no of elements\t");
    scanf("%d",&n);

    printf("\nEnter the numbers\t");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter no you want to search\t!");
    scanf("%d",&j);
    start= clock();
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
         {
             printf("\nFound number.");break;
         }
    }
    end =clock();
    printf("Time Taken=%f",(double)((end-start)/CLOCKS_PER_SEC));
    return 0;
}
