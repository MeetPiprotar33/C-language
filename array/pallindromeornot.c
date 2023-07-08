#include<stdio.h>
#include<stdbool.h>

//WAP to check the number is pallindrome or not..
//m33t


int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers ");
    for(int i=0;i<n;i++){      //taking input
        scanf("%d",&arr[i]);
    }
    bool flag=true;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(arr[i]==arr[j]){}
        else{
            flag=false;
        }
    }
    if(flag==true){
        printf("The entered number is pallindrome..");
    }else{
        printf("The entered number is not pallindrome..");
    }
    return 0;

}