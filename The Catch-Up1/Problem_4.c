#include <stdio.h>
#include <string.h>

int main()
{
    char S1[100], S2[100];
    printf("Word 1: ");
    scanf("%s" , S1);

    printf("Word 2: ");
    scanf("%s" , S2);

    printf("Length of %s = %d \n" , S1 , strlen(S1));
    printf("Length of %s = %d \n\n" , S2 , strlen(S2));

    if(strcmp(S1 , S2) < 0)
        printf("%s comes before %s alphabetically \n" , S1 , S2);
    else if(strcmp(S1 , S2) > 0)
        printf("%s comes before %s alphabetically \n" , S2 , S1);
    else
        printf("%s is equal %s alphabetically \n" , S1 , S2);

    strcat(S1 , S2);
    printf("Concatenated : %s\n" , S1 );
}