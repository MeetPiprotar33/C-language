//WAP to print factorial of the number upto n
//M33T

#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number upto which you want factorials : ");
    scanf("%d",&n);

    for (int i=1 ;i<=n;i++){
        printf("The factorial of the  %d  is  %d\n",i,factorial(i));
    }
    return 0;
}