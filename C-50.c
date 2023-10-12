//Write a program in c to print the factorial number using function.
#include<stdio.h>
int fact(int i ,int num)
{
    int f=1;
    for (i=1;i<=num;i++)
    f=f*i;
    printf("Factorial is ;\n%d",f);
}
int main(){
    int num,i,f;
    printf("Enter the value of num:\n");
    scanf("%d",&num);
    fact(i,num);
}
