#include <stdio.h>

int odd(int* a ,int* odd ,int n);
int main()
{
    int N;
    printf("Enter number of elements : ");
    scanf("%d" , &N);

    int arr[N];
    int* ptr1 = arr;

    printf("Array elements: ");
    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d" , ptr1 + i);
    }

    int odd_n[N];
    int* ptr2 = odd_n;

    int (*ptr_function)(int* ,int* ,int ) = odd;
    int count = (*ptr_function)(ptr1 ,ptr2 ,N );

    printf("Odd numbers are:");
    for(int i = 0 ; i < count ; i++)
    {
        printf(" %d" ,*(ptr2 + i));
    }

    printf("\nTotal odd numbers: %d" , count);
}
int odd(int* arr ,int* odd ,int n)
{
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(*(arr + i) % 2 != 0)
        {
            *(odd + count) = *(arr + i);
            count++;
        }
    }
    return count;
}