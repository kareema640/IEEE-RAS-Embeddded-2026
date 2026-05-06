#include <stdio.h>
#include <math.h>
#include "custom.h"

int add(values num)
{
    return num.a + num.b;
}

int substract(values num)
{
    return num.a - num.b;
}

int multiply(values num)
{
    return num.a * num.b;
}

int division(int num1 , int num2)
{
    if(num2 == 0)
    {
        printf("Division by zero is not allowed.");
        return 0;
    }
    return num1 / num2;
}

int exponentiation(int num1 , int num2)
{
    return pow(num1 , num2);
}