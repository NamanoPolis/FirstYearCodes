#include<iostream>
using namespace std;
#include<stdlib.h>

int primecheck(long long int n)
{
    long long  i;
    for(i=2;i<=n/i;i++)
    {
        if(n%i==0) break;
    }

    if(i>n/i) return 1;
    else return 0;

}

main()
{
   long long int i;
    for(i=600851475143/2;i>1;i--)
    {
        if(primecheck(i))
        {    if(600851475143%i==0)
            {cout<<i<<endl;exit(0);}

        }
    }

    return 0;
}
