#include <stdio.h>
int isPalindrome(long long a);

int main()
{
    long long N ;
    scanf("%lld" , &N);
    if(N % 2 != 0 && isPalindrome(N))
        printf("YES\n");
    else
        printf("NO\n");
}

int isPalindrome(long long a)
{
    int arr[10000];
    long i = 0;
    while(a > 0)
    {
        arr[i] = a % 2;
        a /= 2;
        i++;
    }

    for(long j = 0 ; j < i / 2 ; j++)
    {
        if(arr[j] != arr[i - j - 1])
            return 0 ;
    }

    return 1;
}