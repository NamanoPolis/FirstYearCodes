#include <stdio.h>
#include<stdlib.h>
#define N 100000
#include<time.h>
void merge(int a[],int, int , int );
void mergesort(int a[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,right,mid);
    }
    return;
};
void merge(int a[], int left, int right, int mid)
{
    int i, j, k, c[N];
    i = left;
    k = left;
    j = mid + 1;
    while (i <= mid && j <= right)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= right)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = left; i < k; i++)
    {
        a[i] = c[i];
    }
};
int main()
{
    clock_t start, end;
    int a[N],i,l;
    printf("Enter  the no. of elements!\n");
    scanf("%d",&l);
    for (i = 0; i < l; i++)
    {
        a[i]=rand()%10000;
    }
    printf("\nYour Array is:\n");
    for(i=0;i<l;i++)
    printf("%d \t",a[i]);
    start=clock();
    mergesort(a, 0, l-1);
    end=clock();
    printf("\nSorted array\n");
    for (i = 0; i < l; i++)
    {
       printf("%d \t",a[i]);
    }
    printf("Time taken= %f",(double)((end-start)/CLOCKS_PER_SEC));

    getch();
    return 0;
}
