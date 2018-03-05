#include<iostream>
using namespace std;

int sumn(int n)
{   int i,pow=0;
    while(n>0)
    {
        i=n%10;
        pow=pow+i*i*i*i*i;
        n=n/10;
    }
    return pow;
}

main()
{   int ans,sum=0;
    for(int i=11;;i++)
    {
        ans=sumn(i);
        if(ans==i)
            {sum+=i;
        cout<<i<<"\t"<<sum<<endl;}
    }
        cout<<"sum= "<<sum;
}

