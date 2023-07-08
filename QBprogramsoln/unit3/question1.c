//WAP to print multiplication table of any number.
//M33T
#include<stdio.h>
int main(){
    
    int num;
    printf("Enter the number whose table you want to be printed :-");
    scanf("%d",&num);

    for(int i=1;i<=10;i++){
        printf("%d * %d = %d \n",num,i,num*i);

    }
    return 0;
}