#include<iostream>
using namespace std;
long arr[6];
int pow(int a)
{
    int i,ans=1;

    for(i=0;i<a;i++)
    {
        ans*=10;
    }

    return ans;
}
int primecheck(long n)
{    long x;
    for(x=2;x<=n/x;x++)
    {
        if(n%x==0)
            break;
    }
        if(x>n/x) return 1;
        else return 0;
}
int circlecheck(int len)
{    long roll=0,temp;
        int i,z,nm;
    for(i=0;i<len-1;i++)
    {    nm=0;
        int j=nm;


        while(j<len-1)
        {
             temp=arr[j];
            arr[j]=arr[j+1];

            arr[j+1]=temp;
            j++;
        }
        z=0;
        roll=0;
        for(int k=len-1;k>=0;k--)
        {
            int p=pow(z++);
           // cout<<p<<endl;
            roll=roll+arr[k]*p;

        }
        //cout<<"\nRotATED no "<<roll;
        if(primecheck(roll))
            continue;
        else
            return 0;
    }
    return 1;
}
main()
{   int ind,z,dcount,fcount=0;
    long t,roll,temp;
   for(t=2;t<1000000;t++)
   {
       if(primecheck(t))
       {  //cout<<t<<"\n";
           ind=0;
            dcount=0;
           temp=t;

         while(temp>0)
           {  dcount++;
              arr[ind++]=temp%10;
              temp=temp/10;
           }


            z=0;
           roll=0;
           for(int k=dcount-1;k>=0;k--)
                {
                    roll=roll+arr[k]*pow(z++);
                }
             dcount=0;
             ind=0;

           while(roll>0)
            {
                dcount++;
                arr[ind++]=roll%10;
                roll=roll/10;
            }

              if(circlecheck(dcount))
                {fcount++;
                cout<<t<<"\t";
                }
       }
   }
   cout<<"\nThe total count is "<<fcount;
}
