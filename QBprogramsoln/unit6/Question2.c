//WAP to do swapping of two elements using function with two pointers as arguments. OR
//WAP to exchange two values stored in memoryusing pointers. OR
//WAP to swap two elements using pointer.
//M33T

#include<stdio.h>

int swap(int* a,int* b){
    
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);

    int* ptr1=&num1;
    int* ptr2=&num2;
    swap(ptr1,ptr2);

    printf("First number after swapping is : %d\n",num1);
    printf("Second number after swapping is : %d",num2);
    

}