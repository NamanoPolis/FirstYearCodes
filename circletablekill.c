#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool n[1601]={1};
    int i,count=0;
    for(i=1;count>1600;)
    {
        if(i>1600)
        {
            i=1;
        }
        if(n[i+1]==1)
        {
            n[i+1]=0;
            count++;
            if(count>1599)
                break;
        }
        else
            i=i+2;

    }
    printf("%d",i);
    return 0;
}
