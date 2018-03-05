#include<stdio.h>
int parent[9];
int main()
{
    int i,j,cost[9][9],min,a,b,u,v,mincost=0,n,flag=1;
    printf("Enter no of vertices\t");
    scanf("%d",&n);
    printf("\nEnter cost adjency matrix\n\t");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    printf("\nThe minimum spanning tree is\n");
    while(flag<n)
    {
      min=999;
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n;j++)
          {
              if(cost[i][j]<min)
              {
                  min=cost[i][j];
                  a=u=i;
                  b=v=j;
              }
          }
      }
      u=find(u);
      v=find(v);
      if(uni(u,v))
      {
        printf("\n%d edge (%d,%d)=>%d\n",flag++,a,b,min);
        mincost+=min;
      }
      cost[a][b]=cost[b][a]=999;
    }
    printf("\nThe Minimum cost is %d",mincost);

    return 0;
}
int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
