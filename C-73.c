#include<stdio.h>
int main(){
    int rows=0,cols=0;
    printf("Enter the no of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of cols:\n");
    scanf("%d",&cols);
   int arr[rows][cols];
   for (int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           printf("Enter the element in row :%d column:%d",i,j);
           scanf("%d ",&arr[i][j]);
       }
   }
   for (int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
}
