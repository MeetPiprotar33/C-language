#include<stdio.h>

//WAP to find max and min number..
//m33t

int main(){

    int r,c;
    printf("Enter the number of rows of the array:-");
    scanf("%d",&r);
    printf("Enter the number of column of the array:-");
    scanf("%d",&c);
    printf("Enter the values of the array:-");
    int arr[r][c];                      //taking input
    for (int i=0;i<r;i++){              //taking input
        for(int j=0;j<c;j++){           //taking input
            scanf("%d",&arr[i][j]);     //taking input
        }
    }
    
    int max=arr[0][0],min=arr[0][0],index1,index2,index3,index4;

    for(int i=0;i<r;i++){               
        for(int j=0;j<c;j++){           
            if(max<=arr[i][j]){
                max=arr[i][j];
                index1=i;               //for saving index
                index2=j;               //for saving index
                }
            if(min>=arr[i][j]){
                min=arr[i][j];
                index3=i;               //for saving index
                index4=j;               //for saving index
                }
        }                  
    }

    printf("The given array is :-\n");
    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<c;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    printf("\nThe max number from the given array is '%d' at index (%d,%d)\n",max,index1,index2);
    printf("The min number from the given array is '%d' at index (%d,%d)",min,index3,index4);

    return 0;

}