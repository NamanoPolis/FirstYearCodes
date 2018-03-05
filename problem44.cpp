#include<iostream>
using namespace std;
long long arr[1000];
int pentch(long long n)
{
    int low=0,mid,high=999;
        mid=(low+high)/2;
        while(low<high && arr[mid]!=n)
        {
            if(n>arr[mid])
                low=mid;
            else
                high=mid;
            mid=(low+high)/2;
        }
        if(arr[mid]==n)
            return 1;
        else
            return 0;
}
main()
{
    long long i,j=0,diff=1000000;
    for(i=1;i<1001;i++)
    {
        arr[j++]=(i*(3*i-1))/2;
    }
    for(i=0;i<100;i++)
    {
        for(j=i+1;j<101;j++)
        {
            if(pentch(arr[i]+arr[j]))
            {
                if(pentch(arr[j]-arr[i]))
                {
                    if(diff>(arr[j]-arr[i]))
                    {
                        diff=arr[j]-arr[i];
                        cout<<arr[i]<<"\t"<<arr[j]<<"\t Difference "<<arr[j]-arr[i]<<endl;
                    }
                }
                else
                    continue;
            }
            else
                continue;
        }
    }
}
