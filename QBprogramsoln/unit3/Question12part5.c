/*
1
1 3
1 3 5
1 3 5 7
*/
//M33T


#include<stdio.h>
int main(){

    int rows;
    printf("Enter the number of rows:- ");
    scanf("%d",&rows);
    
    for(int i=1;i<=2*rows;i++){
        if(i%2!=0){
        for(int j=1;j<=i;j++){
            if(j%2!=0){
            printf("%d ",j);}
            
        }
        printf("\n");}
    }
    return 0;
    }