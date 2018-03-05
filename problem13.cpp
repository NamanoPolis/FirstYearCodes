#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    freopen("problem13.txt","r",stdin);
    char arr[100][50];int i,j,ar[100][50];
    for(i=0;i<100;i++)
    {
        for(j=0;j<50;j++)
        {
            cin>>arr[i][j];
            ar[i][j]=arr[i][j]-48;
        }
    }


    int sum[75],tsum=0,csum,k=0,a=0;

        for(j=49;j>=0;j--)
    {
        tsum=0;
        for(i=0;i<100;i++)
        {
            tsum=tsum+ar[i][j];
        }
        cout<< tsum<<endl;
        tsum=tsum+a;
        if(tsum>9)
        {
            int b;
            b=tsum%10;
            a=tsum/10;
            sum[k++]=b;
            if(j==0)
            {     sum[k++]=a%10;
                    a=a/10;
                    sum[k++]=a;
                          }

        }
        else
            sum[k++]=tsum;

    }
    int q;
    for(q=74;q>=0;q--)
        cout<<sum[q];
}
