#include<stdio.h>
void add(int a,int b){
    printf("The sum is %d",a+b);
    return ;
}
void substract(int a,int b){
    printf("The difference is %d",a-b);
    return ;
}
void multiply(int a,int b){
    printf("The multiplication is %d",a*b);
    return ;
}
void division(int a,int b){
    printf("The division is %d",a/b);
    return ;
}

int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    int choice;
    printf("Enter your choice :\n1.for addition\n2.substraction\n3.multiplication\n4.division : ");
    scanf("%d",&choice);

    switch (choice){
        case 1:
            add(a,b);
            break;
        case 2:
            substract(a,b);
            break;
        case 3:
            multiply(a,b);
            break;
        case 4:
            division(a,b);
            break;
        default:
            printf("Enter the valid choice ..");
    }

}