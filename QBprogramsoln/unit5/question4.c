//Create a function to check number is prime or not. If number is primethen function return value 1 otherwise return 0.
//M33T

#include<stdio.h>

int prime(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count<=2){
        return 1;
    }else{
        return 0;
    }
}

void main(){
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);

    printf("%d",prime(num));
}