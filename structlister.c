//Record Database
#include<stdio.h>
main()
{
    printf("Welcome!\n");
   typedef struct dob
   {
       int mm;
       int dd;
       int yyyy;
   } dob;

    typedef struct student_record
    {
        char name[25];
        dob dateofbirth;
        int tmarks;
    } student_record;

   student_record s[10],temp;
   int i,j;
   for(i=0;i<10;i++)
   {
      printf("Enter name of %d student:",i+1);
       scanf("%s",&s[i].name);
       printf("Enter date of birth(mm dd yyyy):");
       scanf("%d %d %d",&s[i].dateofbirth.mm,&s[i].dateofbirth.dd,&s[i].dateofbirth.yyyy);
     printf("Enter marks:");
       scanf("%d",&s[i].tmarks);
    }
    printf("\nFollowing are the rankings of the class-\n");

    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(s[i].tmarks>s[j].tmarks)
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }

    for(i=9;i>=0;i--)
    {
        printf("%s \t %d\n",s[i].name,s[i].tmarks);
    }
}
