#include<iostream>
using namespace std;
int pc(long n)
{
    long i;
    for(i=2;i<=n/i;i++)
    {
        if(n%i==0)break;
    }
    if(i>n/i && n!=1) return 1;
    else
        return 0;
}
main()
{
    long long sum=0;
    long n=2000000,i;
    for(i=2;i<n;i++)
    {
        if(pc(i))
            {
                cout<<i<<endl;
                sum=sum+i;

        }
    }
    cout<<"The sum uptil now is "<<sum;
}
