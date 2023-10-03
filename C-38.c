//write a program in c to print all the even numbers within a specific range using while loop
#include <stdio.h>

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Check if the start and end are valid
   

        // Use a while loop to print even numbers in the range
        printf("Even numbers in the range %d to %d are:\n", start, end);
        int number = start;
        while (number <= end) {
            if (number % 2 == 0) {
                printf("%d ", number);
            }
            number++;
        }
       
    }
