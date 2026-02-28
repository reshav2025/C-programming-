#include <stdio.h>

int main(){
    int today, daysAfter, futureDay;

    const char *dayNames[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };

    printf("Enter today's day of the week (0=Sunday, 1=Monday, ..., 6=Saturday): ");
    scanf("%d", &today);

    if (today < 0 || today > 6) {
        printf("Invalid input. Please enter a number between 0 and 6.\n");
        return 1;
    }

    printf("Enter the number of days after today: ");
    scanf("%d", &daysAfter);

    futureDay = (today + daysAfter) % 7;

    printf("\nToday is %s\n", dayNames[today]);
    printf("%d days from now will be %s\n", daysAfter, dayNames[futureDay]);

    return 0;
}