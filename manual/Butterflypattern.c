#include<stdio.h>
/*
*       * 
* *   * * 
* * * * * 
* *   * * 
*       * 
M33T
*/
int main(){

    int n;
    printf("Enter the number of the rows :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j<=i) printf("O");
            else printf(" ");
        }
        for (int j=n-1;j>=i;j--){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("O");
        }
        printf("\n");
    }
    for (int i=1;i<=n;i++){
        for (int j=n-1;j>=i;j--){
            printf("O");
        }   
        for (int j=1;j<=i;j++){
            printf("  ");
        }
        for (int j=n-1;j>=i;j--){
            printf("O");
        }
        
        printf("\n");
    }
    return 0;
}