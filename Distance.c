#include <stdio.h>

// Structure to represent distance and time
struct DistanceTime {
    int feet;
    int inches;
    int minutes;
};

// Function to calculate total distance and time
struct DistanceTime calculateTotal(struct DistanceTime person1, struct DistanceTime person2) {
    struct DistanceTime total;

    // Add distances
    total.feet = person1.feet + person2.feet;
    total.inches = person1.inches + person2.inches;

    // Convert excess inches to feet
    total.feet += total.inches / 12;
    total.inches %= 12;

    // Add times
    total.minutes = person1.minutes + person2.minutes;

    return total;
}

int main() {
    // Distance and time covered by Mr. X
    struct DistanceTime x = {20, 8, 10};

    // Distance and time covered by Mr. Y
    struct DistanceTime y = {32, 6, 15};

    // Calculate total distance and time
    struct DistanceTime total = calculateTotal(x, y);

    // Display the result
    printf("Total Distance Covered: %d feet %d inches\n", total.feet, total.inches);
    printf("Total Time Taken: %d minutes\n", total.minutes);

    return 0;
}
