#include<stdio.h>
int main()
{
    int i,j,k,limit=7,sum[50]={0};
    //sum[2]=1;
    sum[1]=1;
    for(i=1;i<=limit;i++)
    {
       for(j=i;j<limit;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            //printf("1 ");

            printf("%d",sum[j]+sum[j+1]);
                if(i!=1)sum[j+1]=sum[j]+sum[j+1];
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
