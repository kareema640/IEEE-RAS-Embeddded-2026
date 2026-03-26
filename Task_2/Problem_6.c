#include <stdio.h>
int fib(int a);

int main()
{
    int N;
    scanf("%d", &N);
    int f = fib(N);
    printf("%d\n", f);
}

int fib(int a)
{
    if(a == 1)
        return 0;
    else if(a == 2)
        return 1;
    else
        return fib(a - 1) + fib(a - 2) ;
}
