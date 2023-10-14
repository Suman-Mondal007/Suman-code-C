//Write a program in c to find out the Simple and Compound Interest.
#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,SI,CI;
printf("Enter the value of P,R and T:\n");
scanf("%f%f%f",&p,&r,&t);
SI=(p*r*t)/100;
CI=p*(pow((1+r/100),t)-1);
printf("The required Simple and Compound Interest is:\n%f\n%f",SI,CI);
}
