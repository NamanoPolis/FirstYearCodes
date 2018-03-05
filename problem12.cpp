#include <iostream>
using namespace std;
#include<math.h>

int main()
{
    unsigned int n = 0;
    long long int trin = 0;
    int divisors;

    do
    {
        divisors = 0;
        n++;
        trin = (n*(n+1))/2;


        for (long long int count = 1; count <= sqrt(trin); count++)
        {
            if (trin % count == 0)
            {   long long m=trin/count;
                if(m==sqrt(trin))
                {divisors++;}
                else
                    divisors+=2;
            }
        }
        cout << n << ", " << trin << ", " << divisors << endl;
    } while (divisors < 500);

    cout << fixed << "\n\n" << trin << endl << divisors;
    return 0;
}
