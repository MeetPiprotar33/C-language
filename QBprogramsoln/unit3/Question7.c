//Write a C program to display prime number between 1 to 100.

//M33T

#include<stdio.h>
int main()
{
    printf("The prime numbers bertween 1 and 100 are :-\n");

    for(int i=1;i<=100;i++){
        int count=0;

        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count<=2){
            printf("%d ",i);
        }
    }
    return 0;

}