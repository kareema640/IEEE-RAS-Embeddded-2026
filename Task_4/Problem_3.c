#include <stdio.h>

void swap(int* num1 , int* num2);
int main()
{
    int a, b;
    printf("a = ");
    scanf("%d" ,&a);
    printf("b = ");
    scanf("%d" ,&b);

    swap(&a, &b);

    printf("\na = %d\n", a);
    printf("b = %d", b);
}
void swap(int* num1 , int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}