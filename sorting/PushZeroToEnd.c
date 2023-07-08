#include<stdio.h>
//WAP to push the zero present in the array to the end
//given arry 5 1 0 2 0 6 7 0 4 3
//mkae 5 1 2 6 7 4 3 0 0 0
//M33T

int main(){

    int arr[10]={5,1,0,2,0,6,7,0,4,3};
    int n=10;
    printf("Unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);}

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==0){
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

