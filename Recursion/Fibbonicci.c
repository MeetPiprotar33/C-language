//WAP to print the fibbonacci series upto n.
//M33T
#include<stdio.h>


int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2) ;
}
int main(){
    int n,p;
    printf("Enter the term : ");
    scanf("%d",&n);

    printf("%d ",fibo(n));
    return 0;
}