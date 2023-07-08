#include<stdio.h>
//selection sort 
//M33T

int main(){

    int arr[10]={5,6,8,9,7,4,3,2,1,0};
    
    int n=10;
    printf("Unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int minindex=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                minindex=j;
            }
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;
    }

    printf("\nArray after the sorting in ascending order.\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   



    return 0;
}