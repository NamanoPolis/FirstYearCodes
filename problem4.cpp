#include<iostream>
using namespace std;
main()
{
   // printf("Enter the  number you want to check!");
    //int n;
    //scanf("%d",&n);
    long int i,j,n,pal=0;
    for(i=999;i>99;i--)
        for(j=i;j>99;j--)
    {
            n=i*j;

    long int a=n;
    long int rev=0,temp;
    while(n>=1)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(rev==a)
    {
        if(a>pal)
            pal=a;
    }
    //    printf("The number is a Palindrome!");
    //else
       // printf("The number is not a Palindrome!");
}
cout<<pal;
}
