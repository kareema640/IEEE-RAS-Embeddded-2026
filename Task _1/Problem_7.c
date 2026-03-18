#include <stdio.h>

int main() 
{
    int N, sum = 0, prime = 1;

    printf("Enter a positive integer: ");

    if (scanf("%d", &N) != 1 || N <= 0) 
    {
        printf("Invalid inputs.\n");
        return 0;
    }

    while (N > 0) 
    {
        sum += N % 10;
        N /= 10;
    }

    if (sum < 2) 
    {
        prime = 0;
    } else 
    {
        for (int i = 2; i < sum; i++) 
        {
            if (sum % i == 0) 
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
        printf("The sum of digits (%d) is a prime number.\n", sum);
    else
        printf("The sum of digits (%d) is not a prime number.\n", sum);

    return 0;
}





