#include<stdio.h>
int main()
{
    int i,j,cost[9][9],min,a,b,u,v,mincost=0,visited[9]={0},n,flag=1;
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
    visited[1]=1;
    while(flag<n)
    {
      min=999;
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n;j++)
          {
              if(cost[i][j]<min)
              {
                if(visited[i]!=0)
                {
                  min=cost[i][j];
                  a=u=i;
                  b=v=j;
                }
              }
          }
       }
          if(visited[u]==0||visited[v]==0)
          {
              printf("\n%d edge (%d,%d)=>%d",flag++,a,b,min);
              visited[b]=1;
              mincost+=min;
          }
          cost[a][b]=cost[b][a]=999;
    }
    printf("\nThe Minimum cost is %d",mincost);

    return 0;
}
