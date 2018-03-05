#include<math.h>
#include<iostream>
using namespace std;
int factsum(int n)
{
    int sum=0,ei,i;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {    //cout<<i<<"\t";
            ei=n/i;
            if(i==sqrt(n))
            {
                sum+=i;
                continue;
            }
            if(i==1)
                {
                sum+=i;}

            else
            {//cout<<ei<<"\t";
            sum+=i;
            sum+=ei;}
        }
    }
    //cout<<endl;
    return sum;
};
main()
{
    int i,j,asum=0;

   for(i=2;i<10000;i++)
    {  //cout<<"The factors of "<<i<<"\t";
      j=factsum(i);
      if(i==j)
        continue;
      //cout<<i<<"\t"<<j<<"\n";
     if(i==factsum(j))
      {
          cout<<i<<"\t"<<j<<"\n";
          asum+=i;
      }
    }
    cout<<"The sum of this shit is "<<asum;
}
