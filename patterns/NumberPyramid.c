/*
   1
  123
 12345
1234567
*/
//M33T

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("%d",j);
        }
        printf("\n");    
    }
    return 0;
}