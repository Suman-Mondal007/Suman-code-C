/* write a program in c to print the following structure
   *  *  *  *  *
   *           *
   *           *
   *           *
   *  *  *  *  *    */
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the value of rows:\n");
    
    scanf("%d",&rows);
    printf("Enter the value of cols:\n");
    scanf("%d",&cols);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }

  


  
