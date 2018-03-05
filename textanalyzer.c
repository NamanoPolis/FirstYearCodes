#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter the text!\n\t\t");
    char a[50];
    gets(a);
    int l=strlen(a);
    int i,vow=0,cons=0,dig=0;
    for(i=0;i<l;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            vow=vow+1;
        if(!(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && !((int)a[i]<=57&&(int)a[i]>=48))
            cons=cons+1;
        if((int)a[i]<=57&&(int)a[i]>=48)
            dig=dig+1;
    }
    printf("The above text has %d vowels,%d consonants and %d digits!!!",vow,cons,dig);
}
