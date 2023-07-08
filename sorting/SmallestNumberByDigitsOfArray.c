/*
Ques: Given an array of digits (values are from 0 to 9), the task 
is to find the minimum possible sum of two numbers formed from digits of the array.
Please note that all digits of the given array must be used to form the two numbers.
*/
//M33T
#include<stdio.h>


int main(){

    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    printf("Enter the elements of the array (only 0 to 9):");
    int arr[n];
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

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

    int minnum=0;
    for (int i=0;i<n;i++){
        minnum=minnum*10+arr[i];
    }
    int last_two_digit=minnum % 100;
    int swapped_last_two_digits = (last_two_digit % 10) * 10 + (last_two_digit / 10); 
    int second_min=(minnum/100)*100 + swapped_last_two_digits;

    printf("\nThe smallest number formed by the digits of the array is : %d",minnum);
    printf("\nThe second smallest number formed by the digits of the array is : %d",second_min);
    


    
    return 0; 
}