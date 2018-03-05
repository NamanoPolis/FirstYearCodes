#include<iostream>
using namespace std;
long long collatz(long long n)
{  static long long flag=0;
    long long flagcopy=flag;
   if(n==1)
   {
       flag=0;
    //cout<<n<<"\t";
    return flagcopy;
   }

   if(n%2==0)
      {
         flag++;
         //cout<<n/2<<"\n";
         collatz(n/2);

      }
   else
   {
    flag++;
    //cout<<n*3+1<<"\n";
    collatz(3*n+1);
    }

}
int main()
{
    long long i,val,maxx=2,ans;
    for(i=1;i<=1000000;i++)
    {   //cout<<i<<endl;
        val=collatz(i);
        if(val>maxx)
        {
            maxx=val;
            ans=i;
        }
        //cout<<endl;
    }
    cout<<"The starting number that had the balls to go so long is "<<ans<<" and it has "<<maxx<<"members in its chain!";
    return 0;

}
