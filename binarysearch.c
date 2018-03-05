#include<stdio.h>
#include<time.h>
int main()
{
    int n,j,temp;
    clock_t start,end;
    printf("Enter no of elements\t");
    scanf("%d",&n);
    int i,a[10000];
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Your array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\nEnter number you want to search\t");
    int num;
    scanf("%d",&num);
    start=clock();
    int low=0,high=n-1,mid=(low+high)/2;
    while(low<high && num!=a[mid])
    {
        if(num<a[mid])
            high=mid;
        else
            low=mid;
            mid=(low+high)/2;
    }
    if(a[mid]==num)
    {
        printf("\nFound number at %dth position!",mid+1);
    }
    else
        printf("\nNumber not found!");
    end=clock();
    printf("\nTime taken=%f",(double)((end-start)/CLOCKS_PER_SEC));

    return 0;
}
