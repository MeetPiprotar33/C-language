//Write a C program to input an integer number and check last digit ofnumber is even or odd.

//M33T

#include<stdio.h>

int main(){

    int num;
    printf("Enter the number:-");
    scanf("%d",&num);

    int last_digit=num%10;
    (last_digit%2==0)?printf("The last digit of the number is even"):printf("The last digit of the number is odd");

    return 0;
}