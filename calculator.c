#include<stdio.h>
int main(){
    int a,b,sum,sub,div,mul,cal;
    char choice;
    for (int i=0;i<5;i++){
    printf("Enter the choice (+,-,*,/):\n");
    scanf(" %c",&choice);
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    //for (int i=0;i<5;i++){
       switch (choice){
           case '+':
             sum=a+b;
             printf("The sum of two number is:%d",sum);
             break;
           case'-':
            sub=a-b;
            printf("The sub of two number is:%d",sub);
            break;
           case '*':
               mul=a+b;
               printf("The sum of two number is:%d",mul);
               break;
           case'/':
               div=a-b;
               printf("The sub of two number is:%d",div);
               break;
       }
       printf("\n");
    }
}
