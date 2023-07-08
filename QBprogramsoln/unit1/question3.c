/* WAP that reads two numbers from keyboard and gives their addition,subtraction, multiplication,
division and modulo.*/

//M33T



#include<stdio.h>

int main(){
    
    int a,b;

    printf("Enter the value of the first number:-");
    scanf("%d",&a);
    printf("Enter the value of the second number:-");
    scanf("%d",&b);

   printf("\nThe addition of the two numbers is %d",a+b);
   printf("\nThe substraction of the two numbers is %d",a-b);
   printf("\nThe multiplication of the two numbers is %d",a*b);
   printf("\nThe division of the two numbers is %d",a/b);
   printf("\nThe modulo (remainder) of the two numbers is %d",a%b);

    return 0;
}