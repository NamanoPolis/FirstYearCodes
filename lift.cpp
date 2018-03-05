#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    cout<<"--------------------Lift Program--------------------"<<endl;
    char dir;
    int liftstatus[5]={0,0,0,0,0};
    cout<<"There are 5 lifts available for your service."<<endl<<"Select 1 if you want to use a lift.\nSelecting 2 would show,for each of the 5 lifts,\nthe floor no. on which the lift is currently standing.\nSelect 3 to quit the program\n--------------------------------------------------";
    int inputchoice;
    int pstanding;
    cout<<"\n1. Do you wish to use lift?\n2. Show status of lift.\n3. Exit\n-------------------------------------------------\n";
    cin>>inputchoice;
    switch(inputchoice)
    {
        case 1:cout<<"\nAllot lift:\nEnter the floor no.where you are standing :";
        cin>>pstanding;
        cout<<"Do you wish to go up or down(up/down) Press u for up and d for down: ";
        cin>>dir;
        cout<<"\n\nEnter the floor no. where you want to go:";
        if(dir=='u' && pstanding> )
            break;
        case 2:break;
        case 3:exit(0);break;
        default:cout<<"\nIncorrect choice! try again!"<<endl;
    }


}
