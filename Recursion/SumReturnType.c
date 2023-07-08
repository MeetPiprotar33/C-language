//WAP to print sum upto n without other parameter.
//M33T
#include<stdio.h>

int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum upto %d is : %d",n,sum(n));
    return 0;
}