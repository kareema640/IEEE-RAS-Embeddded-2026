#include <stdio.h>

typedef struct Complex_Numbers 
{
    double Real;
    double Imagine;
}complex;

complex addComplex(complex num1 , complex num2);
int main()
{
    complex num_1 = {30.0 , 80.0};
    complex num_2 = {70.0 , 20.0};

    complex Sum = addComplex(num_1 ,num_2 );
    printf("sum = %0.2lf + %0.2lfi" ,Sum.Real ,Sum.Imagine );
}

complex addComplex(complex num1 , complex num2)
{
    complex sum;
    sum.Real = num1.Real + num2.Real;
    sum.Imagine = num1.Imagine + num2.Imagine;

    return sum;
}