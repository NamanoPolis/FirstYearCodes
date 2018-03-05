#include<iostream>

using namespace std;

int Q[10][10];

class M{
int i,j;
public: int x[10][10];

void read_matrix(int m, int n);
};

void print_matrix(int m,int n, int **s)             // Most probaby this part is malfunctioning.
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< (*(*(s+i)+j))<<"\t";
        }
    }
}

void matrix_multi(int m,int n, int p, int **x, int **y)
{
    for(int i=0;i<m;i++)
    {
        for(int k=0;k<p;k++)
        {
            Q[i][k]=0;
            for(int j=0;j<m;j++)
            {
                Q[i][k]+= (*(*(x+i)+j)*(*(*(y+j)+k)));
            }
        }
    }
}

void M::read_matrix(int m, int n)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>x[i][j];
        }
    }
}


int main()
{
    int m,n,p;

    M C,D;

    cout<<"enter the order of first matrix \n";

    cin >>m>>n;

    cout<<"\nenter the 1st matrix";
    C.read_matrix(m,n);

    cout<<"\n2nd matrix order: ";

    cin>>n>>p;
    cout<<"Enter Matrix";
    D.read_matrix(n,p);

    matrix_multi(m,n,p,(int **)&C.x[0][0],(int **)&D.x[0][0]);

cout << "check";

    print_matrix(m,p,(int **)&C.x[0][0]);

    return 0;
}
