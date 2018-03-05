#include<iostream>
using namespace std;
main()
{
    int i,j,k,prod=0;
    for(i=1;i<350;i++)
       {
         for(j=i+1;j<700;j++)
       {
         k=1000-(i+j);
         if((i*i+j*j)==(k*k))
         {
             prod=i*j*k;
             break;
         }
       }
       if(prod!=0)
        break;
       }
       cout<<prod<<"\t"<<i<<"\t"<<j<<"\t"<<k;


}
