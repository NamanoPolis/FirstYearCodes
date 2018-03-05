#include<stdio.h>
int main()
{
    char a[]="gqpfdqvtu";
    char c[]="erkoku";
    char b='a';
    int i=0;
    while(a[i]!='\0')
    {
        if(i%2==0)
        {
            printf("%c",a[i]-('A'-'@'));
        }
        else
        {
            printf("%c",a[i]-('B'-'@'));
        }
        i++;
    }
    printf("\n");
    i=0;
    char j='X';
    while(c[i]!='\0')
    {
        printf("%c",c[i]-(j%3));
        j--;
        i++;
    }
    return 0;
}
