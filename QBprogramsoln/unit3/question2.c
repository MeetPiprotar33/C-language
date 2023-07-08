//WAP to accept start number and end number from the user and printall the numbers in the range.
//M33T


#include<stdio.h>
int main(){
    
    int fnum,lnum;
    printf("Enter the starting number :-");
    scanf("%d",&fnum);
    printf("Enter the ending number :-");
    scanf("%d",&lnum);

    printf("The numbers in range %d and %d\n",fnum,lnum);
    for(int i=fnum;i<=lnum;i++){
        printf("%d  ",i);

    }
    return 0;
}