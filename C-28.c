//Write a program in c to input 5 subject grade from class 12 and calculate the avg of the grades.
#include<stdio.h>
int main(){
    float bengali,english,math,lsc,che,avg,a;
    printf("Enter bengali marks:\n");
    scanf("%f",&bengali);
    printf("Enter english marks:\n");
    scanf("%f",&english);
    printf("Enter math marks:\n");
    scanf("%f",&math);
    printf("Enter lsc marks:\n");
    scanf("%f",&lsc);
    printf("Enter che marks:\n");
    scanf("%f",&che);
    a=bengali+english+math+lsc+che;
    avg =a/5;
    printf("avg of all subject:%f \n",avg);
   
}
