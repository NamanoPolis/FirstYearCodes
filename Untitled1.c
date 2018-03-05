#include <stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char cm[20];
	gets(cm);
	while(n>0)
	{
		char sm[20];
		char id[100];
		gets(id);
		int i;
		for(i=0;i<20;i++)
		{
			sm[i]=id[i+9];
		}
		int marks=0;
		for(i=0;i<20;i++)
		{
		if(sm[i]==cm[i])
		marks++;
		}
		char g;
		if(marks>=40)
		g='A';
		else if(marks>=30 && marks<=39)
		g='B';
		else if(marks>=20 && marks<=29)
		g='C';
		else if(marks>=10 && marks<=19)
		g='D';
		else
		g='E';
		for(i=0;i<8;i++)
		printf("%c",id[i]);
		printf(" ");
		for(i=0;i<20;i++)
		printf("%c",sm[i]);
		printf(" ");
		printf("%d",marks);
		printf(" ");
		printf("%c",g);
		n--;
	}
	return 0;
}
