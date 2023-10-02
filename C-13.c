//write  a programe in c to print 10 star in each line and total line is 5.
#include <stdio.h>

int main() {
    int i;
    int j;
    
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=10; j++) {
            printf("*");
        }
        printf("\n");
    }
}
