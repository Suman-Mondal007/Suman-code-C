#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int numbers[size];
     for(int i=0;i<size;i++){
         printf("Enter the element in index:\n");
         scanf("%d",&numbers[i]);

     }
     for(int i=0;i<size;i++){
         printf("%d ",numbers[i]);
     }
}
