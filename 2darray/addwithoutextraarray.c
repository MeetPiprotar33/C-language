#include<stdio.h>

//WAP to add two matrix...

int main(){

    int r,c;
    printf("Enter the number of rows of the array:-");
    scanf("%d",&r);
    printf("Enter the number of column of the array:-");
    scanf("%d",&c);

    int arr[r][c], brr[r][c];

    printf("Enter the values for the matrix 1. :-");
    for (int i=0;i<r;i++){                      //taking input for matrix 1
        for(int j=0;j<c;j++){                   //taking input for matrix 1
            scanf("%d",&arr[i][j]);             //taking input for matrix 1
        }
    }
    printf("Enter the values for the matrix 2. :-");
    for (int i=0;i<r;i++){                      //taking input for matrix 2
        for(int j=0;j<c;j++){                   //taking input for matrix 2
            scanf("%d",&brr[i][j]);             //taking input for matrix 2
        }
    }
    printf("The resultant matrix is.. \n");
    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<c;j++){           //printing output
            printf("%d ",arr[i][j]+brr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}