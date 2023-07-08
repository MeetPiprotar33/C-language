#include<stdio.h>
// WAP to print pascals triangle
/*
    1 
   1 1 
  1 2 1
 1 3 3 1
1 4 6 4 1 
*/
//M33T

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++) {fact = fact * i ;}
    return fact;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main(){

    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}