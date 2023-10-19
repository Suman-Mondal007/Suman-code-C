/* Write a program in c to print the fpollowing structue.
        1
     2  3  2
  3  4  5  4  3
4  5  6  7  6  5  4 */

#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", num++);
        }
        for (j = 1; j <= i - 1; j++) {
            printf("%d", num - 2);
            num--;
        }

        printf("\n");
        num = i + 1; 
    }
}
