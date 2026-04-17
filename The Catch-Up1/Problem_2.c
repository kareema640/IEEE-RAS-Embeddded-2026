#include <stdio.h>

int sum(int n ,int s);
int main()
{
    int N;
    printf("N = ");
    scanf("%d" ,&N);

    int Sum = sum(N , 0);
    printf("Sum = %d" , Sum);
}
int sum(int n , int s)
{
    if(n == 0)
        return s;
    else
        return sum(n - 1 , s + n);
}
// The recusion is tail because the function is called in the last line