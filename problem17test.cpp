#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

string checker(int n)
{    string sum;
     string one="one";
    string two="two";
    string three="three";
    string four="four";
    string five="five";
    string six="six";
    string seven="seven";
    string eight="eight";
    string nine="nine";
    string ten="ten";
    string eteen="eleven";
    string tweteen="twelve";
    string tteen="thirteen";
    string foteen="fourteen";
    string fteen="fifteen";
    string sixteen="sixteen";
    string sevteen="seventeen";
    string eiteen="eighteen";
    string nteen="nineteen";
    string twe="twenty";
    string thi="thirty";
    string fort="forty";
    string fif="fifty";
    string sixt="sixty";
    string sev="seventy";
    string eig="eighty";
    string ninety="ninety";
    string onehun="onehundred";
    string twohun="twohundred";
    string threehun="threehundred";
    string fourhun="fourhundred";
    string fivehun="fivehundred";
    string sixhun="sixhundred";
    string sevenhun="sevenhundred";
    string eighthun="eighthundred";
    string ninehun="ninehundred";
    string onethou="onethousand";
    string an="and";
    switch(n)
            {           case 0:sum="";
                        break;
                        case 1:sum=one;
                        break;
                        case 2:sum=two;
                        break;
                        case 3:sum=three;
                        break;
                        case 4:sum=four;
                        break;
                        case 5:sum=five;
                        break;
                        case 6:sum=six;
                        break;
                        case 7:sum=seven;
                        break;
                        case 8:sum=eight;
                        break;
                        case 9:sum=nine;
                        break;
                        case 10:sum=ten;
                        break;
                        case 11:sum=eteen;
                        break;
                        case 12:sum=tweteen;
                        break;
                        case 13:sum=tteen;
                        break;
                        case 14:sum=foteen;
                        break;
                        case 15:sum=fteen;
                        break;
                        case 16:sum=sixteen;
                        break;
                        case 17:sum=sevteen;
                        break;
                        case 18:sum=eiteen;
                        break;
                        case 19:sum=nteen;
                        break;
                        case 20:sum=twe;
                        break;
                        case 30:sum=thi;
                        break;
                        case 40:sum=fort;
                        break;
                        case 50:sum=fif;
                        break;
                        case 60:sum=sixt;
                        break;
                        case 70:sum=sev;
                        break;
                        case 80:sum=eig;
                        break;
                        case 90:sum=ninety;
                        break;
                        case 100:sum=onehun;
                        break;
                        case 200:sum=twohun;
                        break;
                        case 300:sum=threehun;
                        break;
                        case 400:sum=fourhun;
                        break;
                        case 500:sum=fivehun;
                        break;
                        case 600:sum=sixhun;
                        break;
                        case 700:sum=sevenhun;
                        break;
                        case 800:sum=eighthun;
                        break;
                        case 900:sum=ninehun;
                        break;
                        case 1000:sum=onethou;
                        break;
                        case 1001:sum=an;
                        break;
            }
            return sum;
};

int main()
{


    string sum;
    int i,unit,tens,hund,temp;
    for(i=1;i<1001;i++)
    {
        if(i<21)
        {
            sum=checker(i);
            cout<<i<<"\t"<<sum<<"\n";
        }

         else if(i<100)
        {
           unit= i%10;
           tens=(i/10)*10;
           checker(unit);

           cout<<i<<"\t"<<checker(tens)<<checker(unit)<<"\n";
        }

        else if(i<1000)
        {
            if(i==100)
              {
                  sum=checker(i);
                cout<<i<<"\t"<<sum<<"\n";
              }
            else if(i<200)
               {
                   unit=i%10;
                temp=i;
                i=i/10;
                 hund=(i/10)*100;
                 i=i%10;
                 tens=i*10;

                      if(tens==10)
                      {
                          cout<<temp<<
                      }
                    if(temp%100==0)
                           cout<<temp<<"\t"<<checker(hund)<<"\n";
                        else
                        cout<<temp<<"\t"<<checker(hund)<<checker(1001)<<checker(tens)<<checker(unit)<<"\n";

                    i=temp;
                    if(temp==125)
                        exit(0);
                    //cout<<i<<"\t"<<sum<<"\n";
                 }

                }
                else
                   {
                       sum=checker(i);
                    cout<<i<<"\t"<<sum<<"\n";
                   }
    }
    cout<<"The shit load of sum is "<<sum<<"!";
    return 0;
}
