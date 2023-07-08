#include<stdio.h>

//WAP to rotate array 90 degree

//m33t

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

    for(int i=0;i<n;i++){           //transpose of the matrix
        for(int j=i;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    
    
    for(int i=0;i<n;i++){                       //reversing each row
        for(int j=0,k=n-1;j<=k;j++,k--){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
    printf("The matrix after rotation is:-\n");
    //if you reach here msg me 9106669489
    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}