//Write a program in c to take the values of two sides,if both the sides are same ,calculate the area of square
#include <stdio.h>

int main() {
    float side1, side2, area;
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);
    if (side1 == side2 && side1 > 0) {
        area = side1 * side1;
        printf("Both sides are equal. Area of the square is: %.2f\n", area);
    } else {
        printf("These sides do not form a square.\n");
    }
}
