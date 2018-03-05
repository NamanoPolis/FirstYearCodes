#include<stdio.h>
#include<time.h>
int main()
{   int n,a[100000],a1[100000],flag=0,temp,temp1,poss,i,j,maxx;
    clock_t start,end,start1,end1;
    printf("Enter no of elements\t");
    scanf("%d",&n);

       for(i=0;i<n;i++)
    {
        a[i]=rand()%1000;
        a1[i] =a[i];
    }

    start=clock();
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    end=clock();


    start1=clock();
    for(i=0;i<n-1;i++)
    {
        maxx=a1[i];
        for(j=i+1;j<n;j++)
        {
            if(a1[j]>maxx)
            {
                maxx=a1[j];
                poss=j;
                flag++;
            }
        }
        temp1=a1[i];
        a1[i]=maxx;
        if(flag>0){a1[poss]=temp1;}
        flag=0;
    }
    end1=clock();

    printf("\nThe sorted array by Bubble Sort\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nThe sorted array by Selection Sort\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a1[i]);
    }
    printf("\nTime taken by Bubble Sort= %f",(double)((end-start)/CLOCKS_PER_SEC));

    printf("\nTime taken by Selection Sort= %f",(double)((end1-start1)/CLOCKS_PER_SEC));
    return 0;
}
