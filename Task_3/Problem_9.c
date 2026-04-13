#include <stdio.h>
 
int main()
{
    long N ;
    scanf("%ld" ,&N) ;
    long long A[N] ;
 
    for(long i = 0 ; i < N ; i++)
    {
        scanf("%lld" ,&A[i]) ;
    }
 
    long long min = A[0] ;
    long count = 0 ;
 
    for(long i = 0 ; i < N ; i++)
    {
        if(A[i] < min)
        {
            min = A[i];
            count = 1 ;
        }
        else if(A[i] == min)
            count++ ;
    }
 
    if(count % 2 == 0)
        printf("Unlucky\n") ;
    else
        printf("Lucky\n") ;
}