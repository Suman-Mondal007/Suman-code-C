//Write a program in c to vheck whether a person is eligible to vote or not
#include<stdio.h>
int main(){
    int age,b;
    printf("Enter birth year:\n");
    scanf("%d",&age);
    
    b=2023-age;
    if (b>=18){
        printf("The person is eligible for vote:");
        
    }else{
        printf("The person is not eligible for vote:");
     }
}
