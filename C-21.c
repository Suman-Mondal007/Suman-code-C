//Writw a program in c to find a distance between two points.
#include<stdio.h>
#include<math.h>

int main(){
    float x1,y1,x2,y2,distance;
    printf("input the value:x1,y1,x2,y2 \n");
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("distance between two points is :  %f \n",sqrt(distance));
}
