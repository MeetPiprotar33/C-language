#include<stdio.h>
// Find the factorial using the functions
//M33T

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++) {fact = fact * i ;}
    return fact;
}

int main(){

    
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int fact=factorial(n);
    printf("The factorial of the number %d is : %d",n,fact);
    return 0;
}