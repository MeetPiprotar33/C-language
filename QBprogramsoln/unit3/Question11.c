//WAP to count odd and even numbers from given 10 numbers.

//M33T

#include<stdio.h>

int main(){

    int num,oddcount=0,evencount=0;
    for(int i=1;i<=10;i++){
        printf("Enter the number %d :-",i);
        scanf("%d",&num);

        if(num%2==0)
            evencount++;
        else 
            oddcount++;
    }
    printf("There are %d odd numbers given by you\nThere are %d even numbers given by you",oddcount,evencount);
    return 0;
}