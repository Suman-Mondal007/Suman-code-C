//Write a program in c to check whether the chracter enterd by the user uper case or lower case .
#include<stdio.h>
int main(){
    char ch;
    printf("enter the chracter :\n");
    scanf("%c",&ch);
    if (ch >='A' && ch<= 'Z'){
        printf("UC");
    }else{
        printf("LC");
    }
}
