//swapping the values of two number by 
//using the pointer and function
//M33T

#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){

    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);

    swap(&num1,&num2);
    printf("After swapping the first number is %d \n",num1);
    printf("After swapping the second number is %d ",num2);
    return 0;
}