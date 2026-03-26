#include <stdio.h>
void odd(long a);
void even(long a);
int count = 0;

int main()
{
    long n ;
    scanf("%d" , &n);
    if(n % 2 == 0)
    {
        even(n);
        printf("%d",count);
    }
    else
    {
        odd(n);
        printf("%d",count);
    }
}

void odd(long a)
{
    if(a == 1)
    {
        count++;
        return;
    }
    else if((3 * a + 1) % 2 == 0)
    {
        count++ ;
        even(3 * a + 1);
    }
    else 
    {
        count++ ;
        odd(3 * a + 1);
    }
}

void even(long a)
{
    if(a == 1)
    {
        count++;
        return;
    }
    else if((a / 2) % 2 == 0)
    {
        count++ ;
        even(a / 2);
    }
    else 
    {
        count++ ;
        odd(a / 2);
    }
}