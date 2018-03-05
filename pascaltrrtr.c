#include<stdio.h>
int main()
{
    int i,j,lp,limit;
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
       for(j=i;j<limit;j++)
        {
            printf(" ");
        }
        lp=0;
        for(j=1;j<=i;j++)
        {
           if(i-1==0)
           {
               printf("1");
               continue;
           }
           comb(i-1,lp++);
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}
int comb(int hp,int lp)
{
    int up,low;
    if(lp==0||lp==hp)
        {printf("1");
    return;}
    up=fact(hp);
    low=fact(lp)*fact(hp-lp);
    printf("%d",up/low);
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);

}
