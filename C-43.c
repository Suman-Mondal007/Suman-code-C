/* Write a program in c to print the folloeing structure
AA
BB
CCC
DDDD*/

#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces for formatting
        for (j = 1; j <rows-i; j++) {
            printf("");
        }

        // Print characters in increasing order
        for (j =1; j <=i; j++) {
            printf("%c",'A'+ i - 1);
        }

        printf("\n");
    }

    return 0;
}
