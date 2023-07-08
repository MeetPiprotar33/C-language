//** optimized
//WAP to print the number of the ways in from which a person can go to the end point ..
//M33T
#include<stdio.h>


int maze(int n,int m){
    int rightWays=0;
    int downWays=0;
    if(n==1 && n==1)    return 1;
    if(n==1){
        rightWays += maze(n,m-1);
    }
    if(m==1){
        downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    int totalWays=rightWays+downWays;
    return totalWays;
}

int main(){
    int n,m;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of colums : ");
    scanf("%d",&m);
    printf("The number of the ways to go to other end are : %d ",maze(n,m));
    return 0;
}