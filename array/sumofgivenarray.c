#include<stdio.h>
//WAP to print the sum of given array..

//m33t

int main(){
    int n;
    printf("Enter the number of values you watn to sum:- ");
    scanf("%d",&n);
    int num[n],sum=0;
    printf("Enter the numbers ");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for(int j=0;j<n;j++){
        sum+=num[j];
    }
    printf("The sum of given numbers is %d",sum);

    return 0;

}