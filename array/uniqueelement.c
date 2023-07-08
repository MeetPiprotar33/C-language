#include<stdio.h>
#include<stdbool.h>
/*  WAP to find unique number from the pairs
    array example=(1 2 3 4 5 4 3 2 1  )*/

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
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
            }
        }
        if(flag==false){
            printf("The %d is unique in the given array..",arr[i]);
            break;
    }
    
    }
    return 0;

}