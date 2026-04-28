#include <stdio.h>
#include <string.h>

typedef struct date
{
    int day;
    char month[20];
    int year;
}Date;

int main()
{
    Date date1;
    Date date2;

    Date *ptr1 = &date1;
    Date *ptr2 = &date2;

    printf("Enter first date : ");
    scanf("%d %s %d" , &(ptr1->day) , ptr1->month, &(ptr1->year));

    printf("Enter second date : ");
    scanf("%d %s %d" , &(ptr2->day) , ptr2->month , &(ptr2->year));

    if(ptr1->day == ptr2->day && strcmp(ptr1->month,ptr2->month) == 0 && ptr1->year == ptr2->year)
        printf("Dates are equal");
    else
        printf("Dates are not equal");
}