//Write a program to find 1+1/2+1/3+1/4+....+1/n

//M33T


#include<stdio.h>
int main(){
    
    int n;
    float sum=1.00;
    printf("Enter the number of terms :-");
    scanf("%d",&n);
    printf("The series is \n");
    printf("1+");

    for(float i=2;i<=n;i++){
        if(i<n){                        // only for printing series no role in the sum
            printf(" 1/%.0f +",i);      // only for printing series no role in the sum
        }else{                          // only for printing series no role in the sum
            printf(" 1/%.0f",i);        // only for printing series no role in the sum
        }

        sum=sum+1/i;
    }
    printf("\nthe sum is %f  ",sum);
    return 0;
}