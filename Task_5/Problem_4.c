#include <stdio.h>

int main()
{
    int N;
    printf("Enter the array diementins : ");
    scanf("%d" , &N);

    int arr1[N][N], arr2[N][N];
    int (*ptr1)[N] = arr1;
    int (*ptr2)[N] = arr2;

    printf("First matrix\n");
    for(int i = 0 ; i < N ; i++)
    {  
        for(int j = 0 ; j < N ; j++)     
            scanf("%d" , (*(ptr1 + i) + j));
    }

    printf("Second matrix\n");
    for(int i = 0 ; i < N ; i++)
    {  
        for(int j = 0 ; j < N ; j++)     
            scanf("%d" , (*(ptr2 + i) + j));
    }

    printf("Product of matrices is:\n");
    for(int i = 0 ; i < N ; i++)
    {   
        for(int j = 0 ; j < N ; j++)
        {
            int num = 0 ;
            for(int k = 0 ; k < N ; k++)
            {
                num += (*(*(ptr1 + i) + k)) * (*(*(ptr2 + k) + j)) ;
            }
            printf("%d ", num);
        }
        printf("\n");
    }
}