#include<stdio.h>
#include<string.h>
int maxx(int i,int j)
{
    if(i>=j)
        return i;
    else return j;
}

int main()
{
    int i,j,T[25][25];
    char seq1[10],seq2[10];
    printf("Enter First sequence\t");
    gets(seq1);
    printf("Enter Second sequence\t");
    gets(seq2);
    int len1=strlen(seq1),len2=strlen(seq2);
    for(j=0;j<=len2;j++)
        T[0][j]=0;
    for(i=0;i<=len1;i++)
        T[i][0]=0;
    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {
          if(seq1[i]==seq2[j])
                T[i][j]=T[i-1][j-1]+1;
          else
            T[i][j]=maxx(T[i-1][j],T[i][j-1]);
        }
    }
    printf("The length of longest common subsequence is %d",T[len1][len2]);

    return 0;
}
