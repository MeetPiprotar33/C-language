/*
   1
  121
 12321
1234321
*/
//M33T

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int a=i-1;

        for(int j=n;j>i;j--){           //for printing spaces
            printf(" ");
        }
        for(int j=1;j<=i;j++){          //for 1 12 123 1234
            printf("%d",j);     
        } 
        for(int k=1;k<i;k++){           //for   1 21 321  
            printf("%d",a);
            a--;
        } 
        printf("\n");
    }   
    return 0;
}