#include<stdio.h>

//WAP to Store transpose of a given matrix in another matrix..
//m33t

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
    int brr[c][r];
    for(int i=0;i<c;i++){               //storing in other
        for(int j=0;j<r;j++){           //storing in other
            brr[j][i]=arr[i][j];        //storing in other
        }                               //storing in other
    }
    printf("The original matrix is:-\n");
    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<c;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }
    printf("\nThe transpose original matrix is:-\n");
    for(int i=0;i<c;i++){               //printing output
        for(int j=0;j<r;j++){           //printing output
            printf("%d ",brr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}