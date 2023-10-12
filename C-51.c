#include<stdio.h>
int sum(int a,int b,int c,int d)
{
    c=a+b;
    d=a-b;
    printf("The sum is:\n%d",c);
    printf("\n");
    printf("The difference is:\n%d",d);
}
int main(){
    int a,b,c,d;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    sum (a,b,c,d);
}
