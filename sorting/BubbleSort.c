#include<stdio.h>
//bubble sort
//M33T

int main(){

    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    printf("Unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}

    for (int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray after the sorting in ascending order.\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0; 
}

