#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    int number [size];
    for(int i=0;i<size;i++){
        printf("Enter the element in index:%d\n",i);
        scanf("%d",&number[i]);
    }
    for(int i=0;i<size;i++){
        printf(" %d",number[i]);
    }
}
