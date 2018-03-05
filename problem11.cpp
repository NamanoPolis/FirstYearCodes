#include<stdio.h>
#include<iostream>
using namespace std;
long ans;
void prodcheck(long n)
{
  static long fprod=0;
  if(fprod<n)
        {fprod=n;
        ans=fprod;}
};
main()
{
    int arr[20][20];
    long prod;
    freopen("problem11.txt","r",stdin);
    int k,l;

for(k=0;k<20;k++)
{   for(l=0;l<20;l++)
    {
        cin>>arr[k][l];
    }
}

for(k=0;k<20;k++)
{
    for(l=0;l<20;l++)
    {

        if(l<17)
        {
            prod=arr[k][l]*arr[k][l+1]*arr[k][l+2]*arr[k][l+3];//right
            prodcheck(prod);
        }



        if(l<17 && k<17)
        {
            prod=arr[k][l]*arr[k+1][l+1]*arr[k+2][l+2]*arr[k+3][l+3];//diagonal right
            prodcheck(prod);
        }


        if(k<17)
        {
            prod=arr[k][l]*arr[k+1][l]*arr[k+2][l]*arr[k+3][l];//down
            prodcheck(prod);
        }



        if(l>2 && k<17)
            {
                prod=arr[k][l]*arr[k+1][l-1]*arr[k+2][l-2]*arr[k+3][l-3];//diagonal left
                prodcheck(prod);
            }


    }
}

cout<<ans;

}
