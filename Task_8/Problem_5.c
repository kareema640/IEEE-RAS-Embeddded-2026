#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , sum = 0;
    printf("Enter the number of elements : ");
    scanf("%d" ,&n);

    int* arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("The Memory allocated unsuccessful.\n");
        return 0;
    }

    printf("Enter the %d elements : " ,n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , arr + i);
        sum += *(arr + i);
    }

    printf("Sum of elements = %d" , sum);
    free(arr);
}