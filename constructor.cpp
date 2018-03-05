#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Queue
{
    public:
        int F=0,R=0;
        int arr[10];
   void insert1();
    void del();
    void show();
    void exit1();
};

void Queue::insert1()
{
     cout<<"Enter any number!";
     cin>>arr[R];
     R++;
     cout<<endl<<"Number Entered!"<<endl;
     show();
};

void Queue::show()
{    cout<<endl<<"Following is the Queue!"<<endl;
     int i;
     for(i=F;i<R;i++)
            cout<<arr[i]<<"\t";
};

void Queue::del()
{
    F++;
    cout<<endl<<"First Value deleted";
    show();
};

void Queue::exit1()
{
     exit(0);
};

main()
{
    char a;
     Queue obj1;
    do
    {
        cout<<"Enter your choice"<<endl<<"1 for Insert"<<endl<<"2 for Delete"<<endl<<"3 for Show"<<endl<<"4 for Exit"<<endl;
        int c;
        cin>>c;
        switch(c)
        {
            case 1: obj1.insert1();
            break;

             case 2: obj1.del();
            break;

             case 3: obj1.show();
            break;

             case 4: obj1.exit1();
            break;

            default:cout<<"Please Check your choice again!";
        }
        cout<<endl<<"Want to choose again?(Y/N)";
        cin>>a;
    }
    while(a=='Y'||a=='y');
}


