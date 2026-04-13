#include <stdio.h>
#include <string.h>

char S[1000000];
int main()
{
    gets(S);

    long count = 0 , word = 0;
    long len = strlen(S);
    for(long i = 0 ; i < len ; i++)
    {
        if(S[i] >= 'a' && S[i-1] <= 'z' || S[i] >= 'A' && S[i] <= 'Z')
        {
            if(word == 0)
            {
                count++ ;
                word = 1 ;
            }
        }  
        else
            word = 0;  
    }

    printf("%ld" ,count);
    return 0 ;
}