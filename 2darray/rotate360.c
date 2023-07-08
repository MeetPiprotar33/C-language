#include<stdio.h>

//WAP to rotate array 90 180 270 and 360 degree

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

    printf("The original matrix is:-\n");
    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
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
    printf("\nThe matrix after 90 rotation is:-\n");
    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }
    /*rotaion 2nd time */
    for(int i=0;i<n;i++){             //transpose of the matrix
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
    printf("\nThe matrix after 180 rotation is:-\n");
    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }
    /*3rd rotate*/
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
    printf("\nThe matrix after 270 rotation is:-\n");
    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }
    
    /*4th rotation*/
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
    printf("The matrix after 360 rotation is:-\n");
    for(int i=0;i<n;i++){               //printing output
        for(int j=0;j<n;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}