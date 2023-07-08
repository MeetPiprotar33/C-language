// Write a code to find out largest of 2 numbers using ternary operator.
//M33T


#include<stdio.h>

int main(){
    
    int a,b;

    printf("Enter the value of the first number:-");
    scanf("%d",&a);
    printf("Enter the value of the second number:-");
    scanf("%d",&b);

    (a<b)?printf("\n%d is the bigger number..",b):printf("\n%d is the bigger number..",a);

    return 0;
}