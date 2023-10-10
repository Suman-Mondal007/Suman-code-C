//Write a program in c to find the sum of n numbers.
#include<stdio.h>
int sum(int a,int b,int c){

   c= a+b;
    printf("The csum is:%d",c);
}
int main() {
    int a,b,c;
    printf("Enter two numbers a and b:\n");
    scanf("%d %d",&a,&b);

    sum(a,b,c);
    
}
