/*
*****
 ***
  *
 ***
*****
*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of the rows : ");
    scanf("%d",&n);

    for (int i=n-1;i>=0;i--){
        for (int j=n-1-i;j>0;j--){
            printf(" ");
        }
        for (int j=i*2;j>=0;j--){
            printf("*");
        }
        printf("\n");
    }
    for (int i=2;i<=n;i++){
        for (int j=n-1-i;j>=0;j--){
            printf(" ");
        }
        for (int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}