#include <stdio.h>
#include <stdlib.h>

#define AscendingOrder

int* Ascending(int n);
int* Descending(int n);
int main()
{
    int N;
    printf("Enter the number of integars : ");
    scanf("%d",&N);

    #ifdef AscendingOrder
        int* A = Ascending(N);
    #else
        int* A = Descending(N);
    #endif

    if(A == NULL)
        return 0;

    printf("Array after sorted : ");
    for(int i = 0 ; i < N ; i++)
    {
        printf("%d ", A[i]);
    }

    free(A);
}

int* Ascending(int n)
{
    int* arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL)
        return 0;

    printf("Enter the numbers : ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < n - i - 1 ; j++)
        {
            if (arr[j] > arr[j +1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;  
}

int* Descending(int n)
{
    int* arr = (int*) malloc(n * sizeof(int)) ;

    if(arr == NULL)
        return 0;

    printf("Enter the numbers : ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n - i - 1 ; j++)
        {
            if(arr[j] < arr[j +1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;  
}
