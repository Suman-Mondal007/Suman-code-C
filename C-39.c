//write a program in c to check whether an input that is taken by the user is a digit or other chracter
#include <stdio.h>
#include <ctype.h>

int main() {
    char input;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &input);

    // Check if the input is a digit or not
    if (isdigit(input)) {
        printf("%c is a digit.\n", input);
    } else {
        printf("%c is a other chracter.\n", input);
    }

    return 0;
}
