
#include<stdio.h>
#include<string.h>
main()
{
    printf("Enter how many names are you going to enter!\t");
    int a;
    scanf("%d",&a);
    printf("Enter any %d names!\t",a);
    char name[100][10],names[100][10],temp[10];
    int i,j;
    for(i=0;i<a;i++)
        scanf("%s",&name[i]);
    for(i=1;i<a;i++)
      {

        for(j=1;j<a;j++)
    {
        if((strcmp(name[j-1],name[j]))>0)
       {

       strcpy(temp,name[j-1]);
        strcpy(name[j-1],name[j]);
        strcpy(name[j],temp);
    }
    }
      }
      printf("\nSorted Names!\n");
    for(i=0;i<a;i++)

        printf("%s \t\n",name[i]);
}
