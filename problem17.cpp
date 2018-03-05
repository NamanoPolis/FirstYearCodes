#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

int checker(int n)
{    int sum;
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
            {           case 0:sum=0;
                        break;
                        case 1:sum=one.size();
                        break;
                        case 2:sum=two.size();
                        break;
                        case 3:sum=three.size();
                        break;
                        case 4:sum=four.size();
                        break;
                        case 5:sum=five.size();
                        break;
                        case 6:sum=six.size();
                        break;
                        case 7:sum=seven.size();
                        break;
                        case 8:sum=eight.size();
                        break;
                        case 9:sum=nine.size();
                        break;
                        case 10:sum=ten.size();
                        break;
                        case 11:sum=eteen.size();
                        break;
                        case 12:sum=tweteen.size();
                        break;
                        case 13:sum=tteen.size();
                        break;
                        case 14:sum=foteen.size();
                        break;
                        case 15:sum=fteen.size();
                        break;
                        case 16:sum=sixteen.size();
                        break;
                        case 17:sum=sevteen.size();
                        break;
                        case 18:sum=eiteen.size();
                        break;
                        case 19:sum=nteen.size();
                        break;
                        case 20:sum=twe.size();
                        break;
                        case 30:sum=thi.size();
                        break;
                        case 40:sum=fort.size();
                        break;
                        case 50:sum=fif.size();
                        break;
                        case 60:sum=sixt.size();
                        break;
                        case 70:sum=sev.size();
                        break;
                        case 80:sum=eig.size();
                        break;
                        case 90:sum=ninety.size();
                        break;
                        case 100:sum=onehun.size();
                        break;
                        case 200:sum=twohun.size();
                        break;
                        case 300:sum=threehun.size();
                        break;
                        case 400:sum=fourhun.size();
                        break;
                        case 500:sum=fivehun.size();
                        break;
                        case 600:sum=sixhun.size();
                        break;
                        case 700:sum=sevenhun.size();
                        break;
                        case 800:sum=eighthun.size();
                        break;
                        case 900:sum=ninehun.size();
                        break;
                        case 1000:sum=onethou.size();
                        break;
                        case 1001:sum=an.size();
                        break;
            }
            return sum;
};

int main()
{


    int sum=0;
    int i,unit,tens,hund,temp;
    for(i=1;i<1001;i++)
    {
        if(i<21)
        {
            sum=sum+checker(i);
            cout<<i<<"\t"<<sum<<"\n";
        }

         else if(i<100)
        {
           unit= i%10;
           tens=(i/10)*10;
           sum=sum+checker(unit);
           sum=sum+checker(tens);
           cout<<i<<"\t"<<sum<<"\n";
        }

        else if(i<1000)
        {
            if(i==100)
              {
                  sum=sum+checker(i);
                cout<<i<<"\t"<<sum<<"\n";
              }
            else
               {
                   unit=i%10;
                temp=i;
                i=i/10;
                 hund=(i/10)*100;
                 i=i%10;
                 tens=i*10;
                 if(tens==10)
                 {
                     sum=sum+checker(tens+unit);
                 }
                  else
                  {sum=sum+checker(unit);
                   sum=sum+checker(tens);}

                    sum=sum+checker(hund);
                    if(temp%100==0)
                           cout<<"";
                        else
                        sum=sum+checker(1001);

                    i=temp;
                    cout<<i<<"\t"<<sum<<"\n";
                 }
                }
                else
                   {
                       sum=sum+checker(i);
                    cout<<i<<"\t"<<sum<<"\n";
                   }
    }
    cout<<"The shit load of sum is "<<sum<<"!";
    return 0;
}
