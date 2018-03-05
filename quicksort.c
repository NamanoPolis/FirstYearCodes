#include<stdio.h>
#include<time.h>
#define N 500000

int Partition(int *a,int start,int end)
{
  int pivot=a[end];
  int i,pindex=start;
  for(i=start;i<end;i++)
  {
     if(a[i]<=pivot)
     {
         int temp;
         temp=a[i];
         a[i]=a[pindex];
         a[pindex]=temp;
         pindex++;
     }
  }
  int temp1;
         temp1=a[end];
         a[end]=a[pindex];
         a[pindex]=temp1;
         return pindex;
};

void quicksort(int *a,int start,int end)
{
        if(start<end)
        {
            int pindex=Partition(a,start,end);
            quicksort(a,start,pindex-1);
            quicksort(a,pindex+1,end);
        }
};

int main()
{
    printf("Enter no. of elements\t");
    int l,a[N],i;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        a[i]=rand()%1000;
    }
    printf("\nYour array is \n");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    clock_t start,end;
    start=clock();
    quicksort(a,0,l-1);
    end=clock();
    printf("\nThe sorted array is\n");
    for(i=0;i<l;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nTime taken=%f",(double)((end-start)/CLOCKS_PER_SEC));
    return 0;
}

