#include <stdio.h>
void printDigit(long long a);
int begin = 0;

int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0 ; i < T ; i++)
    {
        long long N;
        scanf("%lld", &N);
        printDigit(N);
        printf("\n");
        begin = 0 ;
    }
    return 0;
}

void printDigit(long long a)
{
    if(a == 0 && begin == 0)
        printf("%d", a);
    else if(a > 0){
        begin++;
        printDigit(a / 10);
        printf("%d ", a % 10);
    }
}