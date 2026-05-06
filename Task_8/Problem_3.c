#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a = (int*)malloc(4 * sizeof(int));

    if(a == NULL)
    {
        printf("The Memory allocated unsuccessful.\n");
        return 0;
    }

    printf("The values that assigned = %d\n" , *a);

    int* b = (int*)calloc(4 , sizeof(int));

    if(b == NULL)
    {
        printf("The Memory allocated unsuccessful.\n");
        return 0;
    }

    printf("The values that assigned = %d\n" , *b);

    int* r_a = (int*)realloc(a ,5 * sizeof(int));

    if(r_a == NULL)
    {
        printf("The Memory Reallocated unsuccessful.\n");
        return 0;
    }
    else
    {
        a = r_a ;
    }

    free(a);
    free(b);
}