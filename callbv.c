
#include<stdio.h>
int swapbv(int,int);
main()
{
    int x,y;
    printf("Enter any two numbers!");
    scanf("%d%d",&x,&y);
    swapbv(x,y);
    printf("The value of a is %d and that of b is %d.",y,x);
}
int swapbv(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
