#include<iostream>
using namespace std;
main()
{
        long long int sqsum=0,sumsq,sum=0,diff;
        int i;
        for(i=1;i<101;i++)
        {
            sqsum=sqsum+i*i;
        }
        for(i=1;i<101;i++)
        {
            sum=sum+i;
        }
        sumsq=sum*sum;
        diff=sumsq-sqsum;
        cout<<diff;

}
