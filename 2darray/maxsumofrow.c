#include<stdio.h>

//WAP to Find the row with the maximum sum in a matrix
//m33t

int main(){

    int r,c;
    printf("Enter the number of rows of the array:-");
    scanf("%d",&r);
    printf("Enter the number of column of the array:-");
    scanf("%d",&c);

    printf("enter the values of the array\n");
    int arr[r][c];                      //taking input
    for (int i=0;i<r;i++){              //taking input
        for(int j=0;j<c;j++){           //taking input
            scanf("%d",&arr[i][j]);     //taking input
        }
    }
    int maxsum=0,index;
    for(int i=0;i<r;i++){              
        int sum=0;
        for(int j=0;j<c;j++){           
            sum=sum+arr[i][j];    
        }
        if(maxsum<=sum){
            maxsum=sum;
            index=i;
        }
                         
    }

    printf("The GIVEN ARRAY IS \n"); 
    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<c;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    printf("the row with index %d has max sum of(%d)",index,maxsum);
    return 0;
}
