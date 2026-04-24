#include <stdio.h>

int compare(char* str1 , char* str2);
int main()
{
    char arr1[1000];
    char arr2[1000];
    char* string_1 = arr1;
    char* string_2 = arr2;

    printf("String1: ");
    gets(string_1);
    printf("String2: ");
    gets(string_2);

    int (*ptr)(char* , char*) = compare;
    int res = (*ptr)(string_1 , string_2);
    if(res)
        printf("Both strings are Identical\n");
    else
        printf("Both strings are not Identical\n");
    
}

int compare(char* str1 , char* str2)
{
    int size1 = 0 ;
    while(*(str1 + size1) != '\0')
    {
        size1++;
    }
    int size2 = 0 ;
    while(*(str2 + size2) != '\0')
    {
        size2++;
    }

    if(size1 != size2)
       return 0;
    else
    {
        for(int i = 0 ; i < size1 ; i++)
        {
            if(*(str1 + i) != *(str2 + i))
                return 0;
        }
    }
    return 1;
}
