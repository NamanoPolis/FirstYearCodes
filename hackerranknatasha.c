#include <stdio.h>

int main()
{
    int i[100],j[100],arr[100],sum=0,a,b,tc,nod;
    scanf("%d",&nod);
        scanf("%d",&tc);
        for(a=0;a<nod;a++)
        {
            scanf("%d",&arr[a]);
        }
        for(b=0;b<tc;b++)
        {
            scanf("%d",&i[b]);
            scanf("%d",&j[b]);
        }
        for(a=0;a<tc;a++)
        {    sum=0;
            for(b=i[a];b<=j[a];b++)
            {
                sum=sum+arr[b-1];
            }
            printf("%d\n",sum);
        }

    return 0;
}
