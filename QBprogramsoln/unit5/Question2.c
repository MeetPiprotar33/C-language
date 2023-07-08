//Write a function which takes 2 numbers as parameters and returns the gcdof the 2 numbers. Call the function in main().
//M33T
#include<stdio.h>

int gcd(int a,int b){
    int gcd=1;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
        gcd=i;
        }
    } 
    return gcd;
    
}

int main(){

    int num1,num2;
    printf("Enter the 1st number:- ");
    scanf("%d",&num1);
    printf("Enter the 2nd number:- ");
    scanf("%d",&num2);

    printf("The greatest common divisor of %d and %d is : %d",num1,num2,gcd(num1,num2));
    
}