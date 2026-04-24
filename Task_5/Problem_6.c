#include <stdio.h>

int Add(int num1 , int num2);
int Subtract(int num1 , int num2);
int Multiply(int num1 , int num2);
int Divide(int num1 , int num2);
int (*Operation(int n))(int , int);

int main()
{
    int choose;
    printf("Selest an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");

    printf("Enter Your Choice : ");
    scanf("%d" ,&choose);

    int a , b;
    printf("Enter two numbers : ");
    scanf("%d %d" ,&a ,&b);

    int (*result)(int ,int ) = Operation(choose);

    printf("Result : %d" , result(a ,b ));
}

int Add(int num1 , int num2)
{
    return num1 + num2 ;
}
int Subtract(int num1 , int num2)
{
    return num1 - num2 ;
}
int Multiply(int num1 , int num2)
{
    return num1 * num2 ;
}
int Divide(int num1 , int num2)
{
    return num1 / num2 ;
}
int (*Operation(int n))(int , int)
{
    switch(n)
    {
        case 1:
            return Add;
            break;
        case 2:
            return Subtract;
            break;
        case 3:
            return Multiply;
            break;
        case 4:
            return Divide;
            break;
        default:
            return NULL;
            break;
    }
}