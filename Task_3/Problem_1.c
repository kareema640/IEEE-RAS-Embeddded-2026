#include <stdio.h>
 
int main()
{
    long N;
    long X;
    int found = 0;
 
    scanf ("%ld", &N);
    long A[N];
    for(long i = 0 ; i < N ; i++ )
    {
        scanf ("%ld", &A[i]);
    }
    scanf("%ld", &X);
 
    for (long i = 0 ; i < N ; i++)
    {
        if( X == A[i])
        {
            printf("%ld\n" , i);
            found = 1;
            break ;
        }
    }
 
    if (found == 0)
    {
        printf("-1\n");
    }
 
    return 0 ;
}