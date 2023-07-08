//WAP to read n different integer numbers from keyboard and calculatethe sum using pointer.
//M33T

#include<stdio.h>
#include<stdbool.h>

int main(){

    int num;
    int sum=0;
    bool flag=true;
    while (flag==true){
        
        printf("Enter the number (or 0 for sum ) :\t");
        scanf("%d",&num);
        int* ptr=&num;
        sum=sum+*ptr;
        if (*ptr==0) flag=false;
    }
    printf("The sum is %d",sum);

}