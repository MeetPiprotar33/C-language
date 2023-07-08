//WAP to print hello world n times using recursion
//M33T
#include<stdio.h>

void greeting(int n){
    if(n==0 ) return;
    printf("Hello World. \n");
    greeting(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}