#include <stdio.h>

int main() 
{
    long M, N, min, max, sum = 0;

    while (1)
    {
        if (scanf("%ld %ld", &M, &N) != 2) 
        {
            printf("Invalid inputs.\n");
            break;
        }

        if (M <= 0 || N <= 0) 
        {
            break;
        }

        if (N > M) 
        {
            min = M;
            max = N;
        } else 
        {
            min = N;
            max = M;
        }

        sum = 0; 
        for (long i = min; i <= max; i++) 
        {
            printf("%ld ", i);
            sum += i;
        }
        printf("sum =%ld\n", sum);
    }

    return 0;
}






