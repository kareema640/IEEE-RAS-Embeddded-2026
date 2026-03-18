#include <stdio.h>
int main()
{
    long long N;

    if(scanf("%lld" , &N) == 0 || N < 0)
    {
        printf("Invalid Age .");
        return 0 ;
    }
    else
    {
    printf("%lld years\n" , N / 365);
    N = N % 365;

    printf("%lld months\n" , N / 30);
    N = N % 30;

    printf("%lld days\n" , N);
    }
}