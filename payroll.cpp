#include<iostream>

using namespace std;

class basicpay{
    public:
float bspay, hra, da;
public:
basicpay()
{
    cout<<"enter basic pay rs ";
}
void calc_hra( float n)
{
    hra= (n/100)*bspay;
}

void calc_da( float n)
{
    da= (n/100)*bspay;
}
};

class netpay : public basicpay{
public:
    float npay;
/*netpay()
{
    npay= bspay+hra+da;
}*/
};

int main()
{
    float n;
    basicpay b;
    cin>> b.bspay;
    cout<<"enter percentage for hra ";
    cin>>n;
    b.calc_hra(n);
    cout<<"enter percentage for da ";
    cin>>n;
    b.calc_da(n);

    netpay N;

    N.npay= b.bspay+b.hra+b.da;

    cout<<"payroll is:  rs " << N.npay<<endl;;

    return 0;
}


