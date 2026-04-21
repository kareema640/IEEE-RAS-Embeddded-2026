#include <stdio.h>

int main()
{
    long address = 0x600000;

    int* ptr =(int*)address;
    *ptr = 5;
    
    printf("address = %p" , address);
    printf("value in address = %d" , *ptr);
}