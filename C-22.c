//Write a program in c to check the traingle is right angle or not.
#include<stdio.h>
int main(){
    double side1,side2,side3;
    printf("Enter the length of side1:");
    scanf("%if",&side1);
    printf("Enter the length of side2:");
    scanf("%if",&side2);
    printf("Enter the length of side3:");
    scanf("%if",&side3);
    if(side1*side1==side2*side2+side3*side3 ||
    side2*side2==side1*side1+side3*side3||
    side3*side3==side1*side1+side2*side2){
    printf("its a right angle triangle:\n");
    }else{
        printf("its not a right angle traingle:\n");
    }
    
}
