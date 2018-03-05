#include<stdio.h>
#include<string.h>
main()
{   char c;
    do
    {printf("Enter any Roman Numeral!\nI=1\nV=5\nX=10\nL=50\nC=100\nD=500\n\t");
    char rom[100];int a[50];
    int len,i,j;
    long long int k;
    scanf("%s",&rom);
    len=strlen(rom);
    for(i=0;i<len;i++)
    {
        switch(rom[i])
        {
                     case 'I':a[i]=1;
                     break;
                     case 'V':a[i]=5;
                     break;
                     case 'X':a[i]=10;
                     break;
                     case 'L':a[i]=50;
                     break;
                     case 'C':a[i]=100;
                     break;
                     case 'D':a[i]=500;
                     break;
                     default:printf("Invalid input!");
                     break;
        }
    }
    k = a[len - 1];
   for(j = len - 1; j > 0; j--)
   {
      if(a[j] > a[j - 1])
      {
     k = k - a[j - 1];
      }
      if(a[j] <= a[j - 1])
      {
     k = k + a[j - 1];
      }
   }
    printf("The integer equivalent is %lld.\nDo you wish to do it again?(Y/N)",k);
    scanf(" %c",&c);

    }while(c=='y'||c=='Y');
}
