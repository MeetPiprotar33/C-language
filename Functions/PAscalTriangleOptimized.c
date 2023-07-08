#include<stdio.h>
// WAP to print pascals triangle
/*
    1 
   1 1 
  1 2 1
 1 3 3 1
1 4 6 4 1 
*/
//M33T


int main(){

    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        int first=1;
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",first);  
            first = first  * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}