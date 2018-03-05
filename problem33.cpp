#include<iostream>
using namespace std;
int lowesti,lowestj,lowesttop,lowestbot;
void lterm(int i,int j)
{
     for(int k = i; k > 0;k--)
      {
        if( (i % k == 0) && (j % k == 0) )
	    {
	       i /= k;
	       j /= k;
	    }
      }
      lowesti=i;
      lowestj=j;
};

void lterm1(int i,int j)
{
     for(int k = i; k > 0;k--)
      {
        if( (i % k == 0) && (j % k == 0) )
	    {
	       i /= k;
	       j /= k;
	    }
      }
      lowesttop=i;
      lowestbot=j;
};
main()
{
    int i,j,den,num,top,bot,prodn=1,prodd=1;
    for(i=11;i<100;i++)
        {
       for(j=i+1;j<100;j++)
            {

                     if(i%10==0 || j%10==0)
                        continue;

                else
                    {
                den=j/10;
                num=i%10;
                top=i/10;
                bot=j%10;
                          if(num==den)
                        {  lterm(i,j);
                           lterm1(top,bot);
                           if(lowesttop==lowesti && lowestbot==lowestj)
                           {
                               cout<<i<<"/"<<j<<endl;
                               prodn=prodn*i;
                               prodd=prodd*j;
                           }
                        }
                    }
           }
       }
       lterm(prodn,prodd);
       cout<<"The denominator of the lowest term product is "<<lowestj<<"!!!\nFinally I got this!!!!!";
}
