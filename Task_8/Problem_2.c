#include <stdio.h>

#define AddOperation

#define add(a , b) a + b 
#define subtract(a , b) a - b

int main()
{
    int num1 , num2 , result;
    printf("Enter two numbers : ");
    scanf("%d %d" ,&num1 ,&num2);
    
    #ifdef AddOperation
        result = add(num1 , num2);
    #else
        result = subtract(num1 , num2);
    #endif

    printf("Result = %d" ,result);
}