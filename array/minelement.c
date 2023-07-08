#include<stdio.h>

// WAP to find the minimum element from the array..  
//m33t


int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){      //taking input
        printf("Enter the number %d:-",i+1);
        scanf("%d",&num[i]);
    }

    int min=num[0];
    for(int j=0;j<n;j++){
        if(min>num[j]){
            min=num[j];
        }
    }
    printf("The maximum element from the given array is:- %d",min);

    
    return 0;

}