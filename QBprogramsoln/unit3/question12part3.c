/*
4 3 2 1
3 2 1
2 1
1
*/
//M33T

#include<stdio.h>
int main(){

    int rows;
    printf("Enter the number of rows:-");
    scanf("%d",&rows);
    for(int i=rows;i>0;i--){
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");

    }
    

    return 0;

}