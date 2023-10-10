//Write a program in c to  find the greatest between two numbers usingfunctions.
#include<stdio.h>
int greatest(int a ,int b) {
    if (a > b) {
        printf("A is greatest");
    } else {
        printf("Bis  greatest");
    }
}
int main(){
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    greatest(a,b);
}
