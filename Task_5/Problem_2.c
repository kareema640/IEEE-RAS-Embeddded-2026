#include <stdio.h>

void copy(char* str1 , char* str2);
int main()
{
    char arr1[1000];
    char arr2[1000];
    char* string_1 = arr1;
    char* string_2 = arr2;

    printf("Str: ");
    gets(string_1);

    void (*ptr)(char* , char*) = copy;
    (*ptr)(string_1 , string_2);

    printf("Original String: %s\n" , string_1);
    printf("Copied String: %s\n" , string_2); 
}

void copy(char* str1 , char* str2)
{
    int size1 = 0 ;
    while(*(str1 + size1) != '\0')
    {
        size1++;
    }
    
    for(int i = 0 ; i <= size1 ; i++)
    {
        *(str2 + i) = *(str1 + i);
    }
}