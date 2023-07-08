//WAP to reverse the number.

//M33T

#include<stdio.h>

int main(){

    int num;
    printf("Enter the number you want to reverse:-");
    scanf("%d",&num);
    printf("The reversed number is \n");
    
    while(num!=0){
        printf("%d",num%10);
        num=num/10;
    }
    return 0;

}