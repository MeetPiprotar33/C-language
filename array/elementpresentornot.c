#include<stdio.h>
#include<stdbool.h>
// wap to find the number id present in array or not..
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
    int x;
    printf("Enter number you want:- ");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
        printf("The entered number is present in the array at index(%d)..",i);
        flag=true;
        break ;
        }
    }
    if(flag==false){
        printf("The entered number is not present in the array..");
    }
    return 0;

}