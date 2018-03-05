#include<stdio.h>
int main()
{
    printf("Enter no of elements");
    int n,j=0;
    scanf("%d",&n);

    int arr[10];
    print("Enter the array\t");
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int bucket[10][10]={0};
    for(i=0;i<n;i++)
    {
        bucket[arr[i]*n][j++]=arr[i];
    }

    return 0;
}
