#include<stdio.h>
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
float a,b,c,d;
cin>>a>>b>>c>>d;
float dist=(c-a)*(c-a)+(d-b)*(d-b);
float fdist=sqrt(dist);
printf("%0.5f",fdist);

return 0;
}
