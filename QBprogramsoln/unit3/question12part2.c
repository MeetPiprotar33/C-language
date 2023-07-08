/*
1
2 3
4 5 6
7 8 9 10
*/
//M33T


#include<stdio.h>
int main(){

    int rows;
    printf("Enter the number of rows:-");
    scanf("%d",&rows);
    int k=1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    

    return 0;

}