//i.	Sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!
#include<stdio.h>
int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}


main()
{
    int n;
    printf("Enter X : ");
    scanf("%d",&n);
    float rr=1-(n*2)/(fact(2))+(n*4)/(fact(4))-(n*6)/(fact(6))+(n*8)/(fact(8))-(n*10)/(fact(10));
    printf("%f",rr);

}

