#include<stdio.h>
#include<stdbool.h>
//triplets whose sum is equal to x.
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

    printf("The given array is :- \n");
    for(int i=0;i<n;i++){      
        printf("%d ",num[i]);
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for (int k=j+1; k<n; k++){
                if((num[i]+num[j]+num[k])==x){
                    printf("The pair of number (%d,%d,%d) at index \n (%d,%d,%d) is the pair whose sum is %d\n\n",num[i],num[j],num[k],i,j,k,x);
                    flag=false;
                
                }
            }
        }
    }
    if(flag==true){
        printf("\nSorry.. There is no such pairs available whose sum is %d.",x);
    }
    
    
    return 0;

} 