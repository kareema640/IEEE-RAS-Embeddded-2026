#include <stdio.h>
 
int main()
{
    long N;
    scanf("%ld" , &N);
    long long A[N];
    for(long i = 0 ; i < N ; i++)
    {
        scanf("%lld", &A[i]) ;
    }
    long long min = A[0];
    long long min_i = 0;
 
    for(long i = 0 ; i < N ; i++)
    {
        if (A[i] < min )
        {
            min = A[i];
            min_i = i ;
        }   
    }
    printf("%lld %lld" , min , min_i + 1) ;
}