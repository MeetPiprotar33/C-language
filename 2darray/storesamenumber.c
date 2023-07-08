#include<stdio.h>

//store same number at all place in the array
//m33t

int main(){

    int r,c,num;
    printf("Enter the number of rows of the array:-");
    scanf("%d",&r);
    printf("Enter the number of column of the array:-");
    scanf("%d",&c);
    printf("Enter the number you want to store at at every palce:-");
    scanf("%d",&num);

    int arr[r][c];                      //storing the value at every place
    for (int i=0;i<r;i++){              //storing the value at every place
        for(int j=0;j<c;j++){           //storing the value at every place
            arr[i][j]=num;              //storing the value at every place
        }
    }

    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<c;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output 
    }

    return 0;

}