//#include<stdbool.h>
//#include<math.h>
#include<iostream>
using namespace std;
//int arr[1000],k=0;
int abund(int n)
{
  int i,sum=1,j;
  for(i=2;i<=n/i;i++)
  {
      if(n%i==0)
      {
          sum+=i;
          j=n/i;
          if(j==i)
             cout<<"";
            else
          sum+=j;
      }
  }
  if(sum>n)
    return 1;
  else return 0;


};
int abundsum(int n)
{    int che,che1;
    for(int i=1;i<=n/2;i++)
    {
        che=abund(i);
        che1=abund(n-i);
        if(che==1 && che1==1)
            return 1;

    }
    return 0;
};
int main()
{  int sum=0,ans;
   for(int i=1;i<=28123;i++)
   {
       ans=abundsum(i);
       if(ans==0)
        sum+=i;
   }
   cout<<sum;
   return 0;
}
