//Write a program in c to find the area of circle by taking the value of radius from the user and pass  it asa an  argument use recursion to solve this problem
#include<stdio.h>
#include<stdlib.h>
int ar(int r){
    printf("Enter the value of radius:\n");
    scanf("%d",&r);
    int area=3.14*r*r;
    printf("Area of the circle is:%d\n",area);
    if(r==0){
        printf("Invaild Input!");
        exit(0);
    }
    ar(r);
}
int main(){
    int r;
    ar(r);
}
