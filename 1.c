#include <stdio.h>
#define MIN_PER_HOUR 60
int main (void)
{
int min, hour, min_left;
printf("Enter time in minutes\n");
scanf("%d", &min);
while (min > 0)
        {
        hour = min / MIN_PER_HOUR;
        min_left = min % MIN_PER_HOUR;
        printf("%d minutes is: %d hours, %d minutes\n\n",
        min, hour, min_left);
        printf("Enter more minutes to convert or 0 to quit:\n");
        scanf("%d", &min);
        }
getchar();
return 0;
}