#include<stdio.h>
//Insertion sort
//M33T

int main(){

    int arr[10]={5,6,8,9,7,4,3,2,1,0};
    
    int n=10;
    printf("Unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }

    printf("\nArray after the sorting in ascending order.\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   



    return 0;
}