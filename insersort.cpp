#include<iostream>
using namespace std;
main()
{
    int arr[10];
    cout<<"Enter 10 numbers"<<"\n";
    int j,s,key;
    for(int i=0;i<10;i++)
        {cin>>s;arr[i]=s;}
        int n;
    for(n=2;n<10;n++)
 {
    key=arr[n];
    j=n-1;
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;

 }
   cout<<endl<<"The sorted array is "<<endl;
 for(int k=0;k<10;k++)
    cout<<arr[k]<<"\t";


}

