#include <stdio.h>

int main() {
    int today, daysAfter, futureDay;
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter today's day (Sunday=0, Monday=1, ..., Saturday=6): ");
    scanf("%d", &today);

    printf("Enter the number of days after today: ");
    scanf("%d", &daysAfter);

    futureDay = (today + daysAfter) % 7;

    printf("Today is %s and the future day is %s.\n", days[today], days[futureDay]);

    return 0;
}