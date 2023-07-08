#include<stdio.h>
//kth smallest element
// k should be less than size of the array.
//M33T

int main(){

    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter the elements of the array :");
    int arr[n];
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int k;
    printf("Enter the value of the K : ");
    scanf("%d",&k);

    printf("Unsorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<k;i++){
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
    printf("\nThe kth largest element is %d\n",arr[k-1]);
    
    return 0;
}