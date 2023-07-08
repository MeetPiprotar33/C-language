#include<stdio.h>

//WAP to print transpose of the given matrix
//M33T


int main(){

    int r,c;
    printf("Enter the number of rows of the array:-");
    scanf("%d",&r);
    printf("Enter the number of column of the array:-");
    scanf("%d",&c);
    
    printf("enter the values of the array:-\n");

    int arr[r][c];                      //taking input
    for (int i=0;i<r;i++){              //taking input
        for(int j=0;j<c;j++){           //taking input
            scanf("%d",&arr[i][j]);     //taking input
        }
    }

    for(int i=0;i<c;i++){               //printing output
        for(int j=0;j<r;j++){           //printing output
            printf("%d ",arr[j][i]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}