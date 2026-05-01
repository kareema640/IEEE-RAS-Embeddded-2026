#include <stdio.h>

typedef enum weeks {SATURDAY = 1 ,SUNDAY ,MONDAY ,TUESDAY ,WEDNESDAY ,THURSDAY ,FRIDAY }week_day;

void Week(week_day day);
int main()
{
    week_day Day;
    printf("Enter the number of the day in week : ");
    scanf("%d", &Day);

    Week(Day);
}

void Week(week_day day)
{
    if(day == THURSDAY || day == FRIDAY)
        printf("This is a weekend.");
    else
        printf("This is a weekday.");
}