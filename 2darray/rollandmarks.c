#include<stdio.h>

//WAP to marks and roll number in 2d arrays

//m33t

int main(){

    int r;
    printf("Enter the number of student :-");
    scanf("%d",&r);
    //printf("Enter the number of columb of the array:-");
    //scanf("%d",&marks);
    printf("Enter the marks with the roll number :-");
    int arr[r][2];                      //taking input
    for (int i=0;i<r;i++){              //taking input
        for(int j=0;j<2;j++){           //taking input
            scanf("%d",&arr[i][j]);     //taking input
        }
    }
    printf("The marks of the students with the roll numbers are:-\n");
    printf("roll no \t marks\n");
    for(int i=0;i<r;i++){               //printing output
        for(int j=0;j<2;j++){           //printing output
            printf("%d\t\t",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    return 0;

}