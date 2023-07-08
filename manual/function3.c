#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("The value of a after swapping is %d\n.",a);
    printf("The value of b after swapping is %d ",b);
    return ;
}
int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    swap(a,b);
}