#include <iostream>
using namespace std;

int main()
{
    int i[100],j[100],arr[100],sum=0,a,b,tc,nod;
    cin>>nod;
        cin>>tc;
        for(a=0;a<nod;a++)
        {
            cin>>arr[a];
        }
        for(b=0;b<tc;b++)
        {
            cin>>i[b];
            cin>>j[b];
        }
        for(a=0;a<tc;a++)
        {    sum=0;
            for(b=i[a];b<=j[a];b++)
            {
                sum=sum+arr[b-1];
            }
            cout<<sum<<endl;
        }

    return 0;
}
