#include <stdio.h>
 
int main()
{
    int N,M ;
    scanf("%d %d" ,&N ,&M);

    long long arr[N][M], mirror[N][M];
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            mirror[i][M-j-1] = arr[i][j] ;
        }
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < M ; j++)
        {
            printf("%lld " , mirror[i][j]);
        }
        printf("\n");
    }
    return 0;
}