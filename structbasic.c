#include<stdio.h>
main()
{
   typedef struct personal
   {
       char name[100];
       int doj;
       int salary;
   } personal  ;
   personal p1;
   printf("Enter Name:\t");
   scanf("%s",&p1.name);
   printf("Enter Date of Joining:\t");
   scanf("%d",&p1.doj);
   printf("Enter Salary:\t");
   scanf("%d",&p1.salary);
   printf("Information Entered is\nName:%s\nDate of Joining:%d\nSalary:%d",p1.name,p1.doj,p1.salary);
}
