#include <stdio.h>
#include <math.h>
void armStrong(int lower , int upper);

int main()
{
    int L , U;
    printf("lower limit : ");
    scanf("%d",&L);
    printf("upper limit : ");
    scanf("%d",&U);

    armStrong(L , U);
}

void armStrong(int lower , int upper)
{
    printf("Armstrong numbers between %d to %d are:" , lower , upper);

    for(int i = lower ; i <= upper ; i++)
    {
        int N = i , A = i , digit = 0 ;
        int sum = 0 ;
        while(N > 0)
        {
            N = N / 10 ;
            digit++ ;
        }
    
        while(A >= 1)
        {   
            sum += round(pow(A % 10 , digit));
            A /= 10;
        }

        if(sum == i)
            printf(" %d," , i);
    }
}