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
 
    free(a);
    a = (int*)malloc(5 * sizeof(int));

    if(a == NULL)
    {
        printf("The Memory Reallocated unsuccessful.\n");
        return 0;
    }

    /* 
       In limited memory systems, freeing a block and allocating a larger one 
       can fail if the memory is Fragmented. 
       Even if enough total space exists, 
       malloc will return NULL if it cannot find a single Contiguous block 
       large enough to fit the new request.
    */

    free(a);
    free(b);
}