#include <stdio.h>

int convert(char* str);
int main()
{
    char arr[1000];
    char* ptr = arr;

    printf("str = ");
    scanf("%s" , ptr);

    int (*ptr_function)(char* ) = convert;

    int num = ptr_function(ptr) ;
    printf("%d " , num);
}
int convert(char* str)
{
    int i = 0;
    int num = 0;
    while(*(str + i ) != '\0' )
    {
        if(*(str + i) >= '0' && *(str + i) <= '9')
        {
            num = 10 * num + (*(str + i) - '0') ;
        }
        i++;
    }
    return num;
}