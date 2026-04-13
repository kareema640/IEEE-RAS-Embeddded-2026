#include <stdio.h>

int main()
{
    long R,C;
    printf("Enter the dimentions of two matrices : ");
    scanf("%ld %ld" ,&R ,&C);

    long A1[R][C] , A2[R][C];
    long long sum[R][C];

    printf("matrix1 : \n");
    for(long i = 0 ; i < R ; i++)
    {
        for(long j = 0 ; j < C ; j++)
        {
            scanf("%ld" ,&A1[i][j]);
        }
    }

    printf("matrix2 : \n");
    for(long i = 0 ; i < R ; i++)
    {
        for(long j = 0 ; j < C ; j++)
        {
            scanf("%ld" ,&A2[i][j]);
        }
    }

    for(long i = 0 ; i < R ; i++)
    {
        for(long j = 0 ; j < C ; j++)
        {
            sum[i][j] = A1[i][j] + A2[i][j] ;
        }
    }

    printf("Sum of both matrix =\n");
    for(long i = 0 ; i < R ; i++)
    {
        for(long j = 0 ; j < C ; j++)
        {
            printf("%lld " ,sum[i][j]);
        }
        printf("\n");
    }
}