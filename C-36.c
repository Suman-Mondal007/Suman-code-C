//Write a program in c to take the values of two sides ,calculate the area of rectangle
#include <stdio.h>

int main() {
  float  length, width, area;

    // Input the length and width of the rectangle from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Display the calculated area
    printf("The area of the rectangle is: %f\n", area);

    return 0;
}
