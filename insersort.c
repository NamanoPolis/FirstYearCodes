#include<stdio.h>
#include<time.h>
int main()
{
    int arr[100000];
    printf("Enter no of elements\t");
    int k,i,j,s,len,key;
    scanf("%d",&len);

    for(i=0;i<len;i++)
        {arr[i]=rand()%10000;}
    printf("\nYour array is\n");
    for(i=0;i<len;i++)
        {printf("%d \t",arr[i]);}

    clock_t start,end;
        int n;
        start=clock();
    for(n=1;n<len;n++)
 {
    key=arr[n];
    j=n-1;
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;

 }
 end=clock();
   printf("\nThe sorted array is \n");
 for(k=0;k<len;k++)
    printf("%d \t",arr[k]);
    printf("\nTime taken=%f",(double)((end-start)/CLOCKS_PER_SEC));

return 0;
}

