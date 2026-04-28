#include <stdio.h>
#include <stdlib.h>

typedef struct Pets
{
    int age;
    char *name;
    char *kind;
    char *food;
    char *ownerName;
}Pet ;

void Free(Pet** dog);
int main()
{
    Pet *dog = (Pet*) malloc(sizeof(Pet));

    printf("&dog : %p\n" ,dog);

    Free(&dog);
    printf("&dog : %p" ,dog);
}
void Free(Pet** pet)
{
    free(*pet);
    *pet = NULL;
}