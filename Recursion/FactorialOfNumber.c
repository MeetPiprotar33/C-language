//WAP in C to find factorial of a number using recursive function.
//M33T
#include<stdio.h>

int factorial(int n){
    if(n==1 || n==0 ) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    printf("The factorial of the number %d is : %d",n,factorial(n));
    return 0;
}