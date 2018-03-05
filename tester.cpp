#include<iostream>
using namespace std;
class demo
{int x,y,z;
public:
demo()
{
x=0,y=0,z=0;
cout<<"\n dc";}
demo(int a, int b=2,int c=10)
{

cout<<"\n dpc \n "<<a*b*c;}
void ss()
{cout<<"Hello";}
~demo()
{cout<<"\n dest";}
demo (const demo &d)
{
x=d.x;
y=d.y;
cout<<"\n cc";
}
};
main()
{
//demo d1,d2;//implicit call of default constructor
static int i=5;
demo d3=demo();// implicit call of default par. constructor
demo d4(3,10);
demo d1;
demo d2;
demo d5(d1);
demo d6=demo(d4);
demo();
d1.~demo();

//explicit call of default
// par. constructor
//demo d5=demo(10,12);
//demo d6=demo(1,8,2);
//d1=demo(9,9);//explicit call for existing object
//d2.ss();
//demo(1,2);//explicit call for existing object
}

