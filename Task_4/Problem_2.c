#include <stdio.h>

int main()
{
    int num1, num2;
    printf("num1 = ");
    scanf("%d" ,&num1 );
    printf("num2 = ");
    scanf("%d" ,&num2 );

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("\nSum = %d\n", (*ptr1) + (*ptr2));
    printf("Difference = %d\n", (*ptr1) - (*ptr2));
    printf("Product = %d\n", (*ptr1) * (*ptr2));
    printf("Qiotient = %d\n", (*ptr1) / (*ptr2));
}