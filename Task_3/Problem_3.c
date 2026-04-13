#include <stdio.h>
 
int main()
{
    long N;
    scanf("%ld" , &N);
    int A[N];
    for(long i = 0 ; i < N ; i++)
    {
        scanf("%ld" , &A[i]);
    }
 
    for(long i = 0 ; i < N ; i++)
    {
        for(long j = 0 ; j < N - i - 1  ; j++)
        {
            if(A[j] > A[j+1])
            {
                long temp = A[j] ;
                A[j] = A[j+1];
                A[j+1] = temp ;
            }
        }
    }
 
    for(long i = 0 ; i < N ; i++)
    {
        printf ("%ld " ,A[i]);
    }
}