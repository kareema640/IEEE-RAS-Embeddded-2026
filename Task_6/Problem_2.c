#include <stdio.h>

typedef struct Pets
{
    int age;
    char *name;
    char *kind;
    char *food;
    char *ownerName;
}Pet ;

void initialize(Pet *pet);
void Print(Pet *pet);
int main()
{
    Pet dog;
    Pet *ptr = &dog;
    initialize(ptr);
    Print(ptr);
}

void initialize(Pet* pet)
{
    pet->age =  6;
    pet->name = "semba";
    pet->kind = "Purebred";
    pet->food = "meat";
    pet->ownerName = "mohammed";
}

void Print(Pet* pet)
{
    printf("Name : %s\nAge : %d\nKind : %s\nFood : %s\nOwnerName : %s\n",
            pet->name , pet->age , pet->kind , pet->food , pet->ownerName);
}