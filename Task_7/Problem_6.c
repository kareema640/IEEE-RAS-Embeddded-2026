#include <stdio.h>

typedef union 
{
    int a;
    float b;
    char c;
}UNION ;

int main()
{
    UNION test ;

    test.a = 100;
    printf("test.a = %d\ntest.b = %f\ntest.c = %c\n\n" ,test.a ,test.b ,test.c);

    test.b = 78.98;
    printf("test.a = %d\ntest.b = %f\ntest.c = %c\n\n" ,test.a ,test.b ,test.c);

    test.c ='k';
    printf("test.a = %d\ntest.b = %f\ntest.c = %c\n\n" ,test.a ,test.b ,test.c);
}

/* In a Union, memory is shared among all members.
This means all members start at the same memory address.
We can only store one valid member at a time for the object. 
When we assign a new value to one member, it overwrites the previous data.
Printing other members after an assignment shows how the same binary data is interpreted differently according to each data type. */