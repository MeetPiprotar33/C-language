//WAP to find the highest common factor
//M33T

#include<stdio.h>

int min(int a,int b){
    if(a<b) return a;
    else return b;
}

int hcf(int a , int b){
    int gcd;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){

    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);

    printf("The highest common factor of the numbers %d and %d is : %d",num1,num2,hcf(num1,num2));

    return 0;
}