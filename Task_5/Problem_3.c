#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of element : ");
    scanf("%d" , &N);

    int arr[N];
    int* ptr = arr;

    printf("Array elements: ");
    for(int i = 0 ; i < N ; i++ )
    {
        scanf("%d" , ptr + i);
    }

    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j < N - 1 - i ; j++)
        {
            if(*(ptr + j) > *(ptr + j +1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("\nArray in ascending order: ");
    for(int i = 0 ; i < N ; i++)
        printf("%d," ,*(ptr + i));

    printf("\nArray in descending order: ");
    for(int i = 0 ; i < N ; i++)
        printf("%d," ,*(ptr + N - i - 1));

}