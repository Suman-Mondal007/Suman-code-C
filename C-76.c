/*Write a program in c to find the area of the traingle using functions in the following ways.
1)call by value
2)call by reference    */

//1) Call by value
#include<stdio.h>
float areabyvalue(float,float);
int main (){
    float b,h;
    printf("Enter the value of base:\n");
    scanf("%f",&b);
    printf("Enter the value of height:\n");
    scanf("%f",&h);
    printf("Area of the traingle is:%2f\n", areabyvalue(b,h));

}
float areabyvalue(float b,float h){
    return 0.5*b*h;
}

//call by reference

#include<stdio.h>
void areabyreference(float,float,float*);
int main(){
    float b,h,result;
    printf("Enter the base of the traingle:\n");
    scanf("%f",&b);
    printf("Enter the height of the traingle:\n");
    scanf("%f",&h);
    areabyreference(b,h,&result);
    printf("Area of the traingle :%2f",result);

}
void areabyreference(float b,float h,float *result){
    *result=0.5*b*h;
}
