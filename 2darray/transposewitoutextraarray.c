#include<stdio.h>

//WAP to print transpose of the given matrix without extra array
//M33T

int main(){

    int n;
    printf("Enter the size of the array:-");
    scanf("%d",&n);

    printf("enter the values of the array:-\n");

    int arr[n][n];                      //taking input
    for (int i=0;i<n;i++){              //taking input
        for(int j=0;j<n;j++){           //taking input
            scanf("%d",&arr[i][j]);     //taking input
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("the resultant matrix is :-\n");

    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}