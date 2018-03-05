#include<iostream>
using namespace std;
int tot=0,no=0;
int primefac(long long n)
{    int tit=0;
     while (n%2 == 0)
    {no++;
     n = n/2;}
    if(no>0)
    {tot++;no=0;}

     long long int i;
     for (i = 3; i <=n/i; i = i+2)
    {  while (n%i == 0)
        {   no++;
            n = n/i;}
        if(no>0)
        {tot++;no=0;}
    }

     if (tot==0)
       return 1;
       else
       {   tot++;
           tit=tot;
       tot=0;
        return tit;
       }

};
main()
{  cout<<primefac(644)<<"\t"<<primefac(645);
  /* long long i;
   for(i=14;;i++)
   {
       if(primefac(i)==2)
       {
           if(primefac(i+1)==2)
           {   cout<<i<<"\t"<<i+1;
               /*if(primefac(i+2)==4)
               {
                   if(primefac(i+3)==4)
                   {
                       cout<<i<<"\t"<<i+1<<"\t"<<i+2<<"\t"<<i+3<<"\t";
                       break;
                   }
                   else continue;
               }
               else
                continue;

           }
           else
            continue;
       }
       else
        continue;
   }
*/}

