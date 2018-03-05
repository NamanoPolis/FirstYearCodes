#include<stdio.h>
#include<string.h>
int sorter(int a[],int l);
main()
{
    printf("Enter how many nos are you going to enter!\t");
    int l,i;
    scanf("%d",&l);
    int a[25];
    printf("Enter %d numbers!",l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    sorter(a,l);
    printf("\n");
 for(i=0;i<l;i++)
 printf("\n%d",a[i]);
}
int sorter(int a[],int l)
{
    int i,j,temp;
    for(i=0;i<l;i++)
     {
         for(j=0;j<l;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
     }
     return 0;
}

