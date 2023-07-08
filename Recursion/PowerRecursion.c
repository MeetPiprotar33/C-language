//WAP to print the power of the number.
//M33T
#include<stdio.h>


int power(int n,int p){
    if(p==0) return 1;
    return n*power(n,p-1);
}
int main(){
    int n,p;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&p);
    printf("%d raised to %d is %d",n,p,power(n,p));
    return 0;
}