#include <iostream>
using namespace std;
#include <conio.h>
#include<stdlib.h>
#include<ctime>
void merge(int *,int, int , int );
void mergesort(int *a, int left, int right)
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
}
void merge(int *a, int left, int right, int mid)
{
    int i, j, k, c[50];
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
}
int main()
{
    int a[100],i,l;
    cout<<"Enter  the no. of elements!\n";
    cin>>l;
    for (i = 0; i < l; i++)
    {
        a[i]=rand()%1000;
    }
    cout<<"\nYour Array is:\n";
    for(i=0;i<l;i++)
    cout<<a[i]<<"\t";
    clock_t start=clock();
    mergesort(a, 0, l-1);
    clock_t end=clock();
    double time=(double)((end-start)/CLOCKS_PER_SEC);
    cout<<"\nSorted array\n";
    for (i = 0; i < l; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"Time taken="<<time;

    getch();
}
