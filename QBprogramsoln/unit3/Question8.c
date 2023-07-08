//Write a program to select and print the largest of the three numbersusing nested if else statement.

//M33T

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the number 1:-");
    scanf("%d",&num1);
    printf("Enter the number 2:-");
    scanf("%d",&num2);
    printf("Enter the number 3:-");
    scanf("%d",&num3);

    if(num1>num2){
        if(num1>num3){
            printf("Number 1 (%d) is the biggest number",num1);
        }else {
            printf("Number 3 (%d) is the biggest number",num3);
        }

    }else{
        if(num2>num3){
            printf("Number 2 (%d) is the biggest number",num2);
        }else {
            printf("Number 3 (%d) is the biggest number",num3);
        }
    }
    return 0;
    
}