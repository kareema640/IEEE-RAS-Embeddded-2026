#include <stdio.h>

typedef unsigned int uint32_t;
typedef int i32_t;
typedef unsigned char UC8_t;
typedef char char8_t;
typedef unsigned short US16_t;
typedef short S16_t;

int main()
{
    printf("The size of unsigned int : %d\n",sizeof(uint32_t));
    printf("The size of int : %d\n",sizeof(i32_t));
    printf("The size of unsigned char : %d\n",sizeof(UC8_t));
    printf("The size of char : %d\n",sizeof(char8_t));
    printf("The size of unsigned short : %d\n",sizeof(US16_t));
    printf("The size of short : %d\n",sizeof(S16_t));
}