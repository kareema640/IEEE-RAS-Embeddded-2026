#include <stdio.h>

int length(char* str);
int main()
{
    char arr[1000];
    printf("Str = ");
    gets(arr);
    char* str = arr;

   printf("Length = %d" , length(str));
}
int length(char* str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}