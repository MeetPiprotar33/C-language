//WAP in C to find factorial of a number using recursive function.
//M33T
#include<stdio.h>

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact; 
    
}

int main(){

    int num;
    printf("Enter the number:- ");
    scanf("%d",&num);
    //int x=factorial(num); 
    printf("The factorial of the number %d is : %d",num,factorial(num));
    return 0;
}