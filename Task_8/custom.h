#ifndef CUSTOM_H
#define CUSTOM_H

typedef struct 
{
    int a;
    int b;
}values ;

int add(values num);
int multiply(values num);
int substract(values num);
int division(int num1 , int num2);
int exponentiation(int num1 , int num2);

#endif