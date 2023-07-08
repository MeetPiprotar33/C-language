#include<stdio.h>
//M33T

/*WAP to print the sum of the values between the coordinates in the array
like 
1 2 3 
4 5 6
7 8 9
coordinates of the rectangle are 0 0   3 2
so the rectangle incldes the values 1 2 3 4 5 6
*/


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
    int r1,c1,r2,c2;
    printf("Enter the first coordinates");
    scanf("%d",&r1);
    scanf("%d",&c1);
    printf("Enter the second coordinates:-");
    scanf("%d",&r2);
    scanf("%d",&c2);

    int sum=0;
    for(int i=r1;i<=r2;i++){               
        for(int j=c1;j<=c2;j++){           
            sum=sum+arr[i][j];    
        }                  
    }

    printf("The GIVEN ARRAY IS \n"); 

    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<c;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    printf("The sum between the coordinates are- %d",sum);
    return 0;
}

//output

/*Enter the number of rows of the array:-5
Enter the number of columb of the array:-5
enter the values of the array
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1 
1 1 1 1 1
Enter the first coordinates0 0
Enter the second coordinates:-2 2
The GIVEN ARRAY IS 
1 1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 
The sum between the coordinates are- 9 */