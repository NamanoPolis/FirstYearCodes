#include<stdio.h>
int swapbr(int *x,int *y);
main()
{
    int x,y;
    printf("Enter any two numbers!");
    scanf("%d%d",&x,&y);
    swapbr(&x,&y);
    printf("The value of a is %d and that of b is %d.",x,y);
}
int swapbr(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
