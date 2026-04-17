#include <stdio.h>
#define PI 3.1415926

int main()
{
    double R;
    printf("Radius = ");
    scanf("%lf" , &R);

    printf("Area = %.2f \n" , R * R * PI);
    printf("Circumference = %.2f \n" , 2 * R * PI);
}