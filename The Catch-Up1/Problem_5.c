#include <stdio.h>
#include <string.h>

int main()
{
    char S[500];
    printf("Word : ");
    scanf("%s" , &S);

    int len = strlen(S) , Sum_U = 0 , Sum_L = 0;
    for(int i = 0 ; i < len ; i++)
    {
        printf("[%d] = %c \n" , i , S[i]);
        if(S[i] >= 'a' && S[i] <= 'z')
            Sum_L++;
        else if(S[i] >= 'A' && S[i] <= 'Z')
            Sum_U++;
    } 

    printf("Uppercase letters: %d\nLowercase letters: %d\n" ,Sum_U ,Sum_L );
}