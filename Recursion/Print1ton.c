//WAP to print 1 to n with recursion     
//M33T
#include<stdio.h>

void num(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    num(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    num(1,n);
    return 0;
}