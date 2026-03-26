#include <stdio.h>
int reachValue(long long a , long long n);

int main()
{
    int T;
    scanf("%d" , &T);
    for(int i = 0 ; i < T ; i++)
    {
        long long N;
        scanf("%lld" , &N);
        
        if (reachValue(N , 1))
            printf("YES\n");
        else
            printf("NO\n");
    }
}

int reachValue(long long a , long long n)
{
    if(a == n )
    {
        return 1;
    }
    else if(n > a)
    {
        return 0;
    }
    else
    {
       return reachValue(a , n * 10) | reachValue(a , n * 20);
    }
}
