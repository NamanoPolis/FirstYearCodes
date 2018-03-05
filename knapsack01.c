#include<stdio.h>
int main()
{
    printf("Enter Max Weight\t");
    int w[20],bnf[20],no,i,j,arr[20][20],W;
    scanf("%d",&W);
    printf("\nEnter no of objects\t");
    scanf("%d",&no);
    printf("Enter weight of each object and benefit respectively\t");
    for(i=0;i<no;i++)
        scanf("%d %d",&w[i],&bnf[i]);
    for(i=0;i<=no;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0||j==0)
                arr[i][j]=0;
            else if(w[i-1]<=j)
            arr[i][j]=max(bnf[i-1]+arr[i-1][j-w[i-1]],arr[i-1][j]);
            else
                arr[i][j]=arr[i-1][j];
        }
    }
    printf("The max value can be %d",arr[W-1][no-1]);
    return 0;
}
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
