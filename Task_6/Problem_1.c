#include <stdio.h>

typedef struct Pets
{
    int age;
    char *name;
    char *kind;
    char *food;
    char *ownerName;
}Pet ;

int main()
{
    Pet dog = {6 , "semba" , "Purebred" , "meat" , "mohammed"};

    Pet cat;
    cat.age = 5;
    cat.name = "kity";
    cat.kind = "siamy";
    cat.food = "milk";
    cat.ownerName = "kareema";
    
    printf("Dog name : %s\nDog age : %d\nDog kind : %s\nDog food : %s\nDog ownerName : %s\n",
            dog.name , dog.age , dog.kind , dog.food , dog.ownerName);
    printf("\nCat name : %s\nCat age : %d\nCat kind : %s\nCat food : %s\nCat ownerName : %s\n",
            cat.name , cat.age , cat.kind , cat.food , cat.ownerName);
}