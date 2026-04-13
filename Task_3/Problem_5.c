#include <stdio.h>
 
int main ()
{
    int N; 
    long sum1 = 0 ;
    long sum2 = 0 ;
    long sum = 0 ;
 
    scanf("%d", &N);
    int A[N][N];
    for (int i = 0 ; i < N ; i++)
    {
        for (int j = 0 ; j < N ; j++)
        {
            scanf("%d" , &A[i][j]);
            if ( i == j )
            {
                sum1 += A[i][j];
            }
            if ( i + j == N - 1)
            {
                sum2 += A[i][j]; 
            }
        }
    }
 
    sum = sum1 - sum2 ;
    if(sum < 0)
    {
        sum = -sum ;
    }
 
    printf("%ld\n", sum);
    return 0 ;
}