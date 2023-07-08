//WAP to print the nbumber of ways to reach the nth stair 
//by only taking 1 or 2 steps at a time.
//M33T
#include<stdio.h>


int stair(int n){
    if(n<=2) return n;
    int total_ways = stair(n-1) + stair(n-2) ;
    return total_ways;
}
int main(){
    int n,p;
    printf("Enter the number of staris : ");
    scanf("%d",&n);

    printf("%d ",stair(n));
    return 0;
}