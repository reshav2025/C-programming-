#include <stdio.h>

int main(){
    int month, year, days;

    const char *monthNames[] = {
        "", "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a number between 1 and 12.\n");
        return 1;
    }

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (month) {
        case 1:
            days = 31;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
    }

    printf("%s %d had %d days\n", monthNames[month], year, days);

    return 0;
}