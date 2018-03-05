#include<stdio.h>
main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a>b);
    printf("%d",b>a);
    int c=(a>b)*a+(b>a)*b;
    printf("\n\n\t%d",c);
}
