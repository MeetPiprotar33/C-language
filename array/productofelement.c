#include<stdio.h>

//WAP to find the product of the values in given array.. 
//m33t


int main(){
    int n;
    printf("Enter the number of values you watn to multiply:- ");
    scanf("%d",&n);
    int num[n],sum=1;
    for(int i=0;i<n;i++){      //taking input
        printf("Enter the number %d:-",i+1);
        scanf("%d",&num[i]);
    }

    for(int j=0;j<n;j++){
        sum=sum*num[j];
    }
    printf("The multiplication of given numbers is %d",sum);

    return 0;

}