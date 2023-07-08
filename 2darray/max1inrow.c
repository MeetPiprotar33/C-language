#include<stdio.h>

//m33t

//WAP where Given matrix filled with 0s and 1s, find row with maximum 1s.. 

int main(){

    
    int arr[4][4]={{1,0,1,0},{0,0,0,1},{1,1,1,0},{1,1,1,1,}};       //input
   
    int maxone=0,index;
    for(int i=0;i<4;i++){              
        int count=0;
        for(int j=0;j<4;j++){           
            if(arr[i][j]==1){
                count++;    
        }
        if(maxone<=count){
            maxone=count;
            index=i;
        }
                         
        }
    }

    printf("The GIVEN ARRAY IS \n"); 
    for(int i=0;i<4;i++){               //printing output
        for(int j=0;j<4;j++){           //printing output
            printf("%d ",arr[i][j]);    //printing output
        }                               //printing output
        printf("\n");                   //printing output
    }

    printf("The row with index'%d'has the %d number of 1 element.",index,maxone);
    return 0;
}

