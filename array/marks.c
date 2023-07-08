#include<stdio.h>
//m33t


//wap to get marks from user and print it..
int main(){

    int marks[10];
    for(int i=0;i<10;i++){      //taking input
        printf("Enter the marks of student %d:-",i+1);
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<10;j++){
        printf("The marks of student %d is :- %d \n",j+1,marks[j]);
    }

    return 0;

}