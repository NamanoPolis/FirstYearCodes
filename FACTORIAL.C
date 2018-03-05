#include<stdio.h>
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}

main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("\nFactorial of %d is %d",n,fact(n));
}
