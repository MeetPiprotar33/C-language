#include<stdio.h>
#include<stdbool.h>
 
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
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("The elment %d is present at indexex %d,%d\n",arr[i],i,j);
                flag=true;
            }
        }
    }
    if(flag==false){
        printf("Sorry, No element is dulplicated in the given array..");
    }
    return 0;

}