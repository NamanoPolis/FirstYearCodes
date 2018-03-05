#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}
long long sumf(int n)
{   int i;
    long long sum=0;
   while(n>0)
   {
       i=n%10;
       sum=sum+fact(i);
       n=n/10;
   }
   return sum;
}

main()
{   int ans,sum=0;
    for(int i=11;;i++)
    {
        ans=sumf(i);
        if(ans==i)
            {sum+=i;
        cout<<i<<"\t"<<sum<<endl;}
    }
        cout<<"sum= "<<sum;
}


