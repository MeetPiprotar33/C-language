//WAP to print address of the variable 
//M33T
#include<stdio.h>

int main(){

    int a= 10;
    int b= 10;
    printf("The value of the a is %d \n",a);
    printf("The address of the a is %p",&a);
    printf("The value of the a is %d \n");
    printf("The address of the a is %p",&b);        //%p is for the printing address of any variable
    return 0;
}