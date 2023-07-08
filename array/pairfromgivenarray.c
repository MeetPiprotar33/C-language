#include<stdio.h>
#include<stdbool.h>
//pairs whose sum is equal to x.
//m33t


int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){      //taking input
        printf("Enter the number %d:- ",i+1);
        scanf("%d",&num[i]);
    }
    int x;
    printf("Enter number which you want pairs to be added:- ");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((num[i]+num[j])==x){
                printf("The pair of number (%d,%d) at index \n (%d,%d) is the pair whose sum is %d\n",num[i],num[j],i,j,x);
            flag=true;
            }
        }
    }
    if(flag==false){
        printf("\nSorry.. There is no such pairs available whose sum is %d.",x);
    }
    
    return 0;

} 