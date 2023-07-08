//WAP to find sum of first N odd numbers.
//Ex. 1+3+5+......+N.
//M33T


#include<stdio.h>
int main(){
    
    int num,sum=0;
    printf("Enter number of the terms:-");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        printf("%d ",2*i-1);
        sum += 2*i - 1;

    }
    printf("\nthe sum is %d  ",sum);
    return 0;
}