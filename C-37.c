//write a program in c to display the day of week by taking week number as a input by the user using switch case
#include <stdio.h>

int main() {
    int weekNumber;

    // Input the week number from the user
    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    // Use a switch-case statement to determine the day of the week
    switch (weekNumber) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a week number between 1 and 7.\n");
            break;
    }

    return 0;
}
