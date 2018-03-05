#include<iostream>
using namespace std;
int pow(int a)
{
    int i,ans=1;

    for(i=0;i<a;i++)
    {
        ans*=10;
    }

    return ans;
}
int primecheck(long long n)
{
    long long i;
    for(i=2;i<=n/i;i++)
    {
        if(n%i==0)
            break;
    }
    if(i>n/i)
        return 1;
    else
        return 0;
}
main()
{
    int arr[9]={2,1,3,4,5,6,7,8,9},z,i,j;
    long long roll,maxx=1;
    int temp;

for(int k=0;k<362880;)
{
for(j=0;j<8;j++)
 {

     temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;

     z=0;
     roll=0;
     for(i=8;i>=0;i--)
    {
        int p=pow(z++);
        roll=roll+arr[i]*p;
        k++;
    }
    if(primecheck(roll))
    {
        if(maxx<roll)
         {
            maxx=roll;
            cout<<maxx<<endl;
         }
    }

}
}

}
