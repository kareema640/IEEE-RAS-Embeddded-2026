#include <stdio.h>
#include "custom.h"

int main()
{
    values V;

    printf("Enter the two numbers : ");
    scanf("%d %d" , &(V.a) , &(V.b) );

    int sum = add(V);
    int sub = substract(V);
    int mult = multiply(V);
    int div = division(V.a ,V.b );
    int exp = exponentiation(V.a ,V.b );

    printf("sum = %d\n" , sum);
    printf("substract = %d\n" , sub);
    printf("multiply = %d\n" , mult);
    printf("division = %d\n" , div);
    printf("exponentiation = %d\n" , exp);
}