#include<iostream>
using namespace std;
main()
{
        cout<<"Enter M X N Values!(M>N)";
        int m,n,disp=1,x,counter,flag=0;
        cin>>m;
        cin>>n;
        counter=m*n;
       // cout<<counter<<"\n";
        int arr[m][n];
        int mmim=m+1;
        int down=n;
        cout<<"\nFollowing is the Spiral\n";
        int i=0,j;

        while(flag<=counter)
        {

           // cout<<i+1<<" round";

            for(j=i;j<n-i;j++)     //right
            {
             x=i;
             arr[i][j]=disp++;
             flag++;
            }

            //cout<<"\n"<<"i="<<i<<" j="<<j<<" flag="<<flag<<"\n";

            i=i+1;
            mmim=mmim-1;
            for(j=--j;i<mmim;i++)    //down
            {
             arr[i][j]=disp++;
             //cout<<disp<<" ";
             flag++;
            }
            down=down-1;

           // cout<<"\n"<<"i="<<i<<" j="<<j<<" flag="<<flag<<"\n";
            j=j-1;
            for(i=--i;j>=x;j--)   //left
            {
             arr[i][j]=disp++;
             flag++;
            }

           // cout<<"\n"<<"i="<<i<<" j="<<j<<" flag="<<flag<<"\n";

            i=i-1;
            for(j=++j;i>j;i--)   //up
            {
             arr[i][j]=disp++;
             flag++;
            }

            //cout<<"\n"<<"i="<<i<<" j="<<j<<" flag="<<flag<<"\n";

            i++;
            j++;

            if(flag==counter)
                break;

        }




///*
           for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                cout<<arr[i][j]<<"\t";

            cout<<"\n";
            }
//*/
}
