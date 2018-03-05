#include<stdio.h>
int main()
{
    int i,j,count=0,flag;
    char s1[100],s2[100];

    for(i=0;s1[i]!='\0';i++)
    {
        flag=0;
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
            {
                flag=1;
                s2[j]='0';
                break;
            }
    }
    if(flag==0)
        count++;
}
}
