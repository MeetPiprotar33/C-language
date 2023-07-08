#include<stdio.h>
// Find the combinations using factorial
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
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int ncr=combination(n,r);

    printf("%d C %d is %d ",n,r,ncr);
    
    return 0;
}