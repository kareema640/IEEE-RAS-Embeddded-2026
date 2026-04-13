#include <stdio.h>

int main()
{
    int N;
    printf("Enter the size of the square: ");
    scanf("%d" ,&N);

    int A[N][N];
    printf("Enter the elements of the square: \n");
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j++)
        {
            scanf("%d" ,&A[i][j]);
        }
    }
    
    int sum[2*N + 2];
    for(int i = 0 ; i < 2*N + 2 ; i++)
    {
        sum[i] = 0 ;
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N ; j ++)
        {
            sum[i] += A[i][j];
            sum[j + N] +=A[i][j];

            if(i == j)
                sum[2 * N] += A[i][j];

            if(i + j == N-1)
                sum[2 * N + 1] += A[i][j];
        }
    }

    int magic = 1;
    for(int i = 0 ; i < 2*N + 1 ; i++)
    {
        if(sum[i] != sum[i+1])
        {
            magic = 0 ;
        }
    }

    if(magic == 1)
        printf("The square is a magic square.\n");
    else
        printf("The square is not a magic square.\n");
}