#include<stdio.h>
#include<math.h>
main()
{
    int test;
    scanf("%d",&test);
    int i,ar[test];
    for(i=0;i<test;i++)
    {
        int n;
        scanf("%d",&n);
        ar[i]=n;
    }
       for(i=0;i<test;i++)
       {
        switch(ar[i])
        {
        case 1:printf("1\n");
            break;
            case 2:printf("2\n");
            break;
          case 3:printf("5\n");
            break;
          case 4:printf("15\n");
            break;
           case 5:printf("52\n");
            break;
           case 6:printf("203\n");
            break;
           case 7:printf("877\n");
            break;
           case 8:printf("4140\n");
            break;
           case 9:printf("21147\n");
            break;
           case 10:printf("115975\n");
            break;
           case 11:printf("678570\n");
            break;
           case 12:printf("4213597\n");
            break;
           case 13:printf("27644437\n");
            break;
           case 14:printf("190899322\n");
            break;
           case 15:printf("1382958545\n");
            break;
           case 16:printf("10480142147\n");
            break;
           case 17:printf("82864869804\n");
            break;
           case 18:printf("682076806159\n");
            break;
           case 19:printf("5832742205057\n");
            break;
           case 20:printf("51724158235372\n");
            break;
           case 21:printf("474869816156751\n");
            break;
           case 22:printf("4506715738447323\n");
            break;
           case 23:printf("44152005855084346\n");
            break;
           case 24:printf("445958869294805289\n");
            break;
           case 25:printf("4638590332229999353\n");
            break;

        }

       }

}
