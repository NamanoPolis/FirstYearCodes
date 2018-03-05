#include<stdio.h>
main()
{
    printf("Enter how many numbers are you going to enter!");
    int l;
    scanf("%d",&l);
    printf("Enter %d Numbers!",l);
    int a[l],j;
    for(j=0;j<l;j++)
        scanf("%d",&a[j]);
    int max=-1;
    int min=9999;
    int i;
    for(i=0;i<l;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("The maximum no. is %d \nand \nthe minimum no. is %d",max,min);

}
