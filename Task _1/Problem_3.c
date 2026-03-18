#include <stdio.h>

int main() 
{
    long long A, B, C, D; 
    scanf("%lld %lld %lld %lld" , &A , &B , &C , &D);
 
    if (A >= 2 && B >= 2 && C >= 2 && D >= 2)
    {
        A %= 100;
        B %= 100;
        C %= 100;
        D %= 100;
 
        long long N = A * B * C * D;
 
        if (N % 100 >= 10)
            printf("%lld" , N % 100);
        else
            printf("0%lld" , N % 100);
    }
    else
    {
        printf("Invalid inputs.");
        return 0;
    }
    return 0;
}