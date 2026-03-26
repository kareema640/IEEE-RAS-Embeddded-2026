#include <stdio.h>
int divisible (int a , int b);

int main()
{
    int A , B ;
    printf("Enter two integars : ");
    scanf("%d %d" , &A , &B);

    if(divisible (A , B))
        printf("%d is divisible by %d\n" , A , B);
    else
        printf("%d is not divisible by %d\n" , A , B);
}

int divisible (int a , int b)
{
    if (a % b == 0)
        return 1;
    else
        return 0;
}