#include <stdio.h>

int main()
{
    int n , p;
    printf("number = ");
    scanf("%d" ,&n);
    printf("bit position = ");
    scanf("%d" ,&p);

   printf("Bit %d of %d is: %d\n" ,p ,n ,(n >> (p)) & 1);
   printf("After setting bit %d is: %d\n" ,p ,n | (1 << p));
   printf("After clearing bit %d is: %d\n" ,p ,n & (~(1 << p)));
}