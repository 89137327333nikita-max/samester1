#include <stdio.h>
#define DAYS_PER_WEEK 7
int main(void)
{
int day, week, day_left;
printf("Enter happy days\n");
scanf("%d", &day);
while (day > 0)
        {
        week = day / DAYS_PER_WEEK;
        day_left = day % DAYS_PER_WEEK;
        printf("%d days is: %d weeks %d days\n",
        day, week, day_left);
        printf("Enter another value or 0 to exit\n");
        scanf("%d", &day);
        }
getchar();
return 0;
}