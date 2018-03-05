#include<stdio.h>
main()
{
    printf("Enter any Number!\n\t\t");
    int n;
    scanf("%d",&n);
    int t=n,temp,i=0,j,bin[100];
    while(n>0)
    {
        temp=n%2;
        bin[i++]=temp;
        n=n/2;
    }
    printf("The binary equivalent of %d is:",t);
    for(j=i-1;j>-1;j--)
        printf("%d",bin[j]);
}
