#include <stdio.h>

typedef struct Pets
{
    int age;
    char *name;
    char *kind;
    char *food;
    char *ownerName;
}Pet ;

Pet Create();
int main()
{
    Pet Cat = Create();
   printf("Name : %s\nAge : %d\nKind : %s\nFood : %s\nOwnerName : %s\n",
            Cat.name , Cat.age , Cat.kind , Cat.food , Cat.ownerName);
}

Pet Create()
{
    Pet cat;

    cat.age = 5;
    cat.name = "kity";
    cat.kind = "siamy";
    cat.food = "milk";
    cat.ownerName = "kareema";

    return cat;
}