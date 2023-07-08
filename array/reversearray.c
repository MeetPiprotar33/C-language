#include<stdio.h>

//WAP to reverse the values of the array and store it in different aaray..

//m33t

int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){      //taking input
        printf("Enter the number %d:-",i+1);
        scanf("%d",&arr[i]);
    }

    int brr[n];
    for(int i=0;i<n;i++){
        brr[n-1-i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
        
    }
    return 0;

}