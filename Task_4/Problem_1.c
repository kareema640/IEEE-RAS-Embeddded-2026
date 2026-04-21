#include <stdio.h>

int main()
{
    int i = 5;
    char c = 'A';
    float f = 7.9;
    long l = 12456789;

    // Pointer Declaration
    int *ptr_i = &i;
    char *ptr_c = &c;
    float *ptr_f = &f;
    long *ptr_l = &l;

    // Accessing Addresses
    printf("&i = %p\n" , ptr_i);
    printf("&c = %p\n" , ptr_c); 
    printf("&f = %p\n" , ptr_f); 
    printf("&l = %p\n\n" , ptr_l);

    // Accessing Values
    printf("i = %d\n" , *ptr_i);
    printf("c = %c\n" , *ptr_c);
    printf("f = %f\n" , *ptr_f);
    printf("l = %ld\n" , *ptr_l);    
}

