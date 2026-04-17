#include <stdio.h>

int isEven(int n);
int isOdd(int n);
int main()
{
    int N;
    printf("N = ");
    scanf("%d" , &N);

    if(isEven(N))
        printf("%d is Even. \n" , N);
    else
        printf("%d is Odd. \n" , N); 
}
int isEven(int n)
{
    if(n == 0)
        return 1;
    else
        isOdd(n-1);
}
int isOdd(int n)
{
    if(n == 0)
        return 0;
    else
        isEven(n-1);
}