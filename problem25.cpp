#include<iostream>
using namespace std;
main()
{

long long int f1=0,f2=1;
cout<<"Enter the no of terms you want to generate:";
long long int n;
cin>>n;
long long int f;
long long int c=0;
while(c<n)
{
if(c<=1)
{
    cout<<c;
}
else
{
f=f1+f2;
f1=f2;
f2=f;
cout<<f;
}
c++;
}

}
