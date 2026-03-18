#include <stdio.h>

int main() 
{
    int n;
    int max, min;
    int count = 0;

    printf("Enter the numbers (-1 to stop): \n");
    int N = scanf("%d", &n);

    while (N) 
    {
        if (n == -1) 
            break;

        if (count == 0) 
        {
            max = n;
            min = n;
        } else 
        {
            if (n > max) 
                max = n;
            if (n < min) 
                min = n;
        }
        count++;
        N = scanf("%d", &n);

        if (N == 0)
        {
            printf("Invalid numbers.\n");
            return 0 ;  
        }
    }

    if (count == 0) 
    {
        printf("Invalid numbers.\n");
    } 
    else 
    {
        printf("Maximum: %d, Minimum: %d\n", max, min);
    }

    return 0;
}
