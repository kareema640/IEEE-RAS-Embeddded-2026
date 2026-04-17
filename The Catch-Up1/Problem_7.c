#include <stdio.h>

int main()
{
    int n , p;
    printf("number = ");
    scanf("%d" ,&n);
    printf("positions = ");
    scanf("%d" ,&p);

    printf("%d << %d = %d\n%d >> %d = %d",n ,p ,n<<p ,n ,p ,n>>p);
}