#include<stdio.h>
main()
{
    printf("Enter the  number you want to check!");
    int n;
    scanf("%d",&n);
    int a=n;
    int rev=0,temp;
    while(n>=1)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(rev==a)
        printf("The number is a Palindrome!");
    else
        printf("The number is not a Palindrome!");
}
