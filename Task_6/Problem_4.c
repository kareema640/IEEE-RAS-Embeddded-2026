#include <stdio.h>

typedef struct employee_1
{
    int a;
    char b;
    short c;
}employee_1;

typedef struct employee_2
{
    char a;
    int b;
    short c;
}employee_2;

int main()
{
    employee_1 employee1;
    printf("Size of employee_1 : %d\n" , sizeof(employee1));
    printf("&employee_1.int : %d\n" , &employee1.a);
    printf("&employee_1.char : %d\n" , &employee1.b);
    printf("&employee_1.short : %d\n" , &employee1.c);

    employee_2 employee2;
    printf("\nSize of employee_2 : %d\n" , sizeof(employee2));
    printf("&employee_2.char : %d\n" , &employee2.a);
    printf("&employee_2.int : %d\n" , &employee2.b);
    printf("&employee_2.short : %d\n" , &employee2.c);
}
/* MEMORY PADDING EXPLANATION:
1. Alignment: Processors read memory in words 4 bytes. 
They prefer data to start at addresses divisible by their size.
2. Padding: To achieve this alignment, the compiler inserts empty bytes between struct members.
3. Optimization: Struct 1 is 8 bytes because variables are ordered better.
Struct 2 is 12 bytes because int forced a 3-byte gap.
*/