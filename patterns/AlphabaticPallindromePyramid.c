/*
   A
  ABA
 ABCBA
ABCDCBA
*/
//M33T

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int x=i-1;
        int a=1;
        for(int j=n;j>i;j--){           //for printing spxces
            printf(" ");
        }

        for(int j=1;j<=i;j++){          //for 1 12 123 1234
            printf("%c",a+64);
            a++;     
        } 
        for(int k=1;k<i;k++){           //for   1 21 321  
            printf("%c",x+64);
            x--;
        } 
        printf("\n");
    }   
    return 0;
}