//WAP using function to find maximum of two numbers.
//M33T

#include<stdio.h>
void max(int a,int b){
    if(a<b){
        printf("%d is the grater",b);
    }else{
        printf("%d is the grater",a);
    }

    
    
}

int main(){
    int x,y;
    printf("enter the 1st number");
    scanf("%d",&x);
    printf("enter the 2nd number");
    scanf("%d",&y);

    max(x,y);
    return 0;
}