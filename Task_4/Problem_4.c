#include <stdio.h>
#include <string.h>

int main()
{
    char* str ;
    printf("str = ");
    scanf("%s" , str);

    while (*str != '\0')
    {
        if((*str - '0') % 2 == 0 )
        {
            printf("%c" ,*str);
        }
        str++ ;
    }
    printf("\n");
}