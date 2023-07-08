//Write a function to swap two numbers.
//M33T

#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("The numbers after swapping is %d and %d",a,b);
    
}

int main(){
    int x,y;
    printf("enter the 1st number");
    scanf("%d",&x);
    printf("enter the 2nd number");
    scanf("%d",&y);

    swap(x,y);
    return 0;
}