#include<iostream>
using namespace std;
main()
{
    long long n=100;
      int i;
      for(i=2;i<21;i++)
       {
           if(n%i==0)
            {
                continue;}
           else
           {
               n+=20;
               i=2;
           }
}
cout<<n;
}
