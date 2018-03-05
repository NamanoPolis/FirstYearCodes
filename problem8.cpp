#include<stdio.h>
#include<iostream>
using namespace std;
main()
{freopen("problem8.txt","r",stdin);
int k;char arr[1000];
for(k=0;k<1000;k++)
{
    cin>>arr[k];
}
      int arrr[1000];
      for(k=0;k<1000;k++)
      {
          arrr[k]=arr[k]-48;
      }


   long long int product=1,temproduct=1;
int i,j;
for(i=0;i<1000-12;i++)
{
    product=1;
    for(j=i;j<i+13;j++)
    {

        product=product*arrr[j];

    }    if(temproduct<product)
            temproduct=product;
    }
        cout<<"The greatest product will be "<<temproduct;


}

