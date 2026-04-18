#include <stdio.h>
int highestCommon(int a , int b);

int main()
{
    int val_1 , val_2 ;
    int GCD;

    printf("first number: ");
    scanf("%d" , &val_1);
    printf("second number: ");
    scanf("%d" , &val_2);
    
    GCD = highestCommon(val_1 ,val_2 );

    printf("GCD of %d and %d = %d \n" ,val_1 ,val_2 ,GCD);
}

int highestCommon(int a , int b)
{
    if(b == 0)
        return a;
    else
    {
       return highestCommon(b ,a % b);
    } 
}
