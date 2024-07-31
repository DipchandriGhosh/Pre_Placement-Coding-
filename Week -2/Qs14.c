#include <stdio.h>

const char *getDayOfWeek(int day, int month, int year) {
    // Zeller's Congruence algorithm
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int K = year % 100;
    int J = year / 100;

    int f = day + ((13 * (month + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J);
    int dayOfWeek = f % 7;

    // Convert Zeller's output to day of the week
    switch(dayOfWeek) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid";
    }
}

int main() {
    int day, month, year;

    // Taking input for the date
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Getting the day of the week
    const char *dayOfWeek = getDayOfWeek(day, month, year);

    // Printing the result
    printf("The day of the week is: %s\n", dayOfWeek);

    return 0;
}
