#include <stdio.h>

int main() 
{
    long N;

    printf("Enter a number: ");

    if (scanf("%ld", &N) != 1 || N < 1) 
    {
        printf("Invalid inputs.\n");
        return 0;
    }

    for (long i = 1; i <= N; i++) 
    {
        if (N % i == 0) {
            printf("%ld\n", i);
        }
    }
    
    return 0;
}





