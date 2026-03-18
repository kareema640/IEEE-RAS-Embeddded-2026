#include <stdio.h>

int main() 
{
    long N, sum = 0;

    printf("Enter a positive integer: ");

    if (scanf("%ld", &N) != 1 || N <= 0) 
    {
        printf("Invalid inputs.\n");
        return 0;
    }

    long i = 1;
    while (i < N) 
    {
        if (N % i == 0) 
        {
            sum += i;
        }
        i++;
    }

    if (sum == N) 
    {
        printf("%ld is a perfect number.\n", N);
    } else 
    {
        printf("%ld is not a perfect number.\n", N);
    }

    return 0;
}










