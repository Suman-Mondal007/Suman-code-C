/*   Write  a program in c to print the following structure 
   *  *  *  *  *
     *  *  *  *
       *  *  *
         *  *
           *
          *  *
        *  *   *
     *   *   *   *
  *    *   *   *   *     */

#include <stdio.h>
int main() {
    int n;
 printf("Enter the number of rows in the hourglass: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (n - i) + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = 1; j <=  (n - i) + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
