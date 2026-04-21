#include <stdio.h>

int main()
{
    int a = 7;
    int *aPtr = &a;

    // Accessing Addresses
    printf("Address of a is %p\nValue of aPtr is %p\n\n", &a, aPtr);
    // Accessing Values
    printf("Value of a is %d\nValue of *aPtr is %d\n\n", a, *aPtr);
    
    printf("Showing that * and & are complements of each other\n");
    printf("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);
}