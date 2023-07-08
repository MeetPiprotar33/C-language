//WAP to print the power of the number .
//M33T
#include<stdio.h>
#include<limits.h>



int power(int n,int p){
    if(p==0) return 1;
    int x=power(n,p/2);
    if (p%2==0)     return  x * x ; 
    else            return x * x * n ;
}
int main(){
    int n,p;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&p);
    printf("%d raised to %d is %d",n,p,power(n,p));

    int meet=INT_MAX;
    printf("\n%d",meet);
    return 0;
}