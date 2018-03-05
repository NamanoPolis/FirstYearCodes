#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[200];
    int l,lp,i,flag,j,poss;
    printf("Enter String\t");
    scanf("%s",&a);//gets(a);
    printf("\nEnter Pattern to check\t");
    scanf("%s",&b);//gets(b);
    l=strlen(a);
    lp=strlen(b);
    if(lp<=l)
    {
        for(i=0;i<=l-lp;i++)
        {
            flag=0;
            for(j=0;j<lp;j++)
            {
                if(a[i+j]==b[j])
                {if(flag==0){poss=i;}
                    flag++;continue;}
                else
                    break;
            }
            if(flag==lp)
            {
                printf("\nFound Pattern which starts at %dth character!",poss+1);
                break;

            }

        }
        if(i>l-lp)
            printf("\nPattern not Found!");
    }
    else
    printf("\nPattern Bigger Than Text");
    return 0;
}
