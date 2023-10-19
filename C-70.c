//Write a program in c to find the area of a trapezium using pointers.

#include <stdio.h>

// Function to calculate the area of a trapezium
double calculateTrapeziumArea(double *base1, double *base2, double *height) {
    return ((*base1 + *base2) * *height) / 2.0;
}

int main() {
    double base1, base2, height;

    printf("Enter the length of the first base: ");
    scanf("%lf", &base1);

    printf("Enter the length of the second base: ");
    scanf("%lf", &base2);

    printf("Enter the height: ");
    scanf("%lf", &height);

    // Call the calculateTrapeziumArea function to calculate the area
    double area = calculateTrapeziumArea(&base1, &base2, &height);

    printf("The area of the trapezium is: %lf\n", area);

    return 0;
}
