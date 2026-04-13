#include <stdio.h>

int main()
{
    long N;
    scanf("%ld" ,&N);
    char S[N + 1];
    scanf("%s" , S);

    long count = 1;
    for(long i = 1 ; i < N ; i++)
    {
        if(S[i] != S[i-1])
            count++;
    }
    printf("%ld\n" , count);
}