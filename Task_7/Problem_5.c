#include <stdio.h>

typedef enum operations
{
    PLUS = 43, 
    MINUS = 45, 
    MULTIPLY = 42, 
    DIVIDE = 47, 
    AND = 38, 
    OR = 124
}operation;

int main()
{
    operation S;
    int operand1 , operand2 ;
    char symbol;

    printf("Enter the operation : ");
    scanf("%d %c %d" , &operand1 , &symbol , &operand2);
    printf("The result : ");

    S = symbol;
    switch (S)
    {
        case PLUS : 
        {
            printf("%d\n" , operand1 + operand2);
            break;
        } 
        case MINUS :
        {
            printf("%d\n" , operand1 - operand2);
            break;
        } 
        case MULTIPLY :
        {
            printf("%d\n" , operand1 * operand2);
            break;
        }
        case DIVIDE :
        {
            printf("%d\n" , operand1 / operand2);
            break;
        }
        case AND :
        {
            printf("%d\n" , operand1 & operand2);
            break;
        }
        case OR :
        {
            printf("%d\n" , operand1 | operand2);
            break;
        }
    }
}
/* The size of this enum is 4 bytes because the compiler treats enum members as integers by default. 
Even if we add more members, the size remains 4 bytes because the enum variable 
only holds one value at a time. 
The size would only increase if we added a member with a value that exceeds the range of integars,
forcing the compiler to use a larger data type. */