#include<stdio.h>

//WAP to rotate array by k steps..

//m33t

void main(){
    int n,k;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){                           //taking input
        printf("Enter the number %d:-",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the number of steps to rotate the array");
    scanf("%d",&k);
    k=k%n;

    for(int i=0,j=n-1;i<=j;i++,j--){                //reversing the array
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int i=0,j=k-1;i<=j;i++,j--){                //reversing element upto k
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=k,j=n-1;i<=j;i++,j--){                //reversing elements after the k
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}