#include<iostream>
using namespace std;
int pow(int z)
{   int a=1;
    for(int i=0;i<z;i++)
    {
        a*=10;
    }
    return a;
}
int pc(long n)
{
    long i;
    for(i=2;i<=n/i;i++)
    {
        if(n%i==0)break;
    }
    if(i>n/i && n!=1) return 1;
    else
        return 0;
}
main()
{   long dig,rem,dum,sum=0;
    for(long i=11;;i++)
    {
        if(pc(i))
        {   //cout<<i<<endl;
            int ch=1;
             dig=0;
             dum=i;
            while(dum>0)
            {
                dum=dum/10;
                dig++;
            }
          //cout<<"Dig="<<dig<<endl;
            dum=i;
            int p=dig-1;
            //int aaa=dig-1;
            while(p>0)
            {
                if(pc(dum/pow(p--)))
                    {
            //            cout<<dum/(pow(aaa--))<<endl;
                    }
                else {ch=0;break;}
            }
            if(ch==0)
                continue;
              //  cout<<"First half done"<<endl;

                dum=i;
            int q=dig-1;
            //int aaaa=dig-1;
            while(q>0)
            {
                if(pc(dum%pow(q--)))
                    {
              //           cout<<dum/(pow(aaaa--))<<endl;
                    }
                else {ch=0;break;}
            }
            if(ch==0)
                continue;
                sum+=i;
              cout<<i<<"\t"<<"sum "<<sum<<"\n";

        }
    }
    cout<<"\nThe Sum Is "<<sum;
}
