#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c[1000];
    int palind = 1;

    printf("Enter a word: ");

    if (scanf("%s", c) != 1) 
    {
        printf("Invalid inputs.\n");
        return 0;
    }

    int len = strlen(c);

    for (int i = 0; i < len; i++) 
    {
        c[i] = tolower(c[i]);
    }

 
    for (int i = 0; i < len / 2; i++) 
    {
        if (c[i] != c[len - i - 1]) 
        {
            palind = 0;
            break;
        }
    }

    if (palind == 1)
        printf("The word '%s' is a palindrome.\n", c);
    else
        printf("The word '%s' is not a palindrome.\n", c);

    return 0;
}







