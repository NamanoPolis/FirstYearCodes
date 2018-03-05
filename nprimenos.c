int main()
{
printf("Enter any number:");
int n,a=0;
scanf("%d",&n);
int p=2;
while(a<n)
{
int chk=2;
while(chk<p)
{
if(p%chk==0)
break;
chk++;
}
if(chk==p)
{printf("%d\n",p);
a++;
}p++;
}
getch();
return 0;
}
