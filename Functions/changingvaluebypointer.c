//changing value of the variable by using pointer
//M33T

#include<stdio.h>

int main(){

    int a;
    printf("Enter the value of the a :");
    scanf("%d",&a);
    printf("The value of a before changing is %d\n",a);
    int *x=&a;
    printf("Enter the changed value of a : ");
    scanf("%d",&*x);
    printf("The changed value is %d",a);
    return 0;
}