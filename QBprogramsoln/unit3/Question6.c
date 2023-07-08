//Write a menu driven c program for simple calculator. Also drawflowchart.

//M33T

#include <stdio.h>

int main() {

    int num1, num2, choice;
    float result;

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice:- ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %f", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %f", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %f", result);
            break;
        case 4:
            if(num2 == 0) {
                printf("Division by zero error!");
            }
            else {
                result = (float)num1 / num2;
                printf("Result = %f", result);
            }
            break;
        default:
            printf("Invalid choice!");
            break;
    }

    return 0;
}
