#include<stdio.h>
int function(char c);
main()
{
  printf("Do you want to call the function?(y/n)");
  char a;
  scanf("%c",&a);
  function(a);
}
int function(char c)
{
  if(c=='y')
   printf("Yes,the function is called Successfully!");
   else
   printf("No,the function couldn't be called!");
   return 0;
}
