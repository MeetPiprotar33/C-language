//Develop a simple program to add, subtract and multiply two numbersusing switch statement.

//M33T


#include<stdio.h>
int main(){
    
    float a,b;
    int operation;
    printf("Enter the first number :-");
    scanf("%f",&a);
    printf("Enter the second number :-");
    scanf("%f",&b);

    printf("what do you want to do \n1  for addition\n2 for substraction\n3 for mutiplication\n4 for division :- ");
    scanf("%d",&operation);

    switch(operation) {
        case 1:printf("The addition is %d",a+b);
            break;
        case 2:printf("The substraction is %d",a-b);
            break;
        case 3:printf("The multiplication is %d",a*b);
            break;
        case 4:printf("The division is %d",a/b);
            break;
        default :printf("The entered value is not valid..");
        break;

    }



    return 0;   
}