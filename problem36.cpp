#include<math.h>
#include<iostream>
using namespace std;
int pc(long n)
{    long a=n;
    long rev=0,temp;
    while(n>=1)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    if(rev==a)
        return 1;
    else
        return 0;
}
int bina(long n)
{ long t=n,temp,i=0,j,bin[50];
    int dcount=0;
    while(n>0)
    {
        temp=n%2;
        bin[i++]=temp;
        dcount++;
        n=n/2;
    }
        for(i=0;i<dcount/2;i++)
        {
            if(bin[i]==bin[dcount-1-i])
                continue;
            else return 0;
        }
        return 1;
}
main()
{
    long i,sum=0;
    for(i=1;i<1000000;i++)
    {
        if(pc(i))
        {
            if(bina(i))
                {
            sum+=i;
                cout<<i<<"\t";}

        }

    }
    cout<<"\n"<<"Sum is "<<sum<<"!!!";
}
