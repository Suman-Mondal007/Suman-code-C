//Write a program in c to calculate the area of a hexagon.
#include<stdio.h>
int main(){
    float area;
    int a;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    area=3*1.732*0.5*a*a;
    printf("area of the hexagon :%f",area);
}
