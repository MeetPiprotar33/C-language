#include<stdio.h>
//multiply odd index number with 2 and add 10 to even index number.
//m33t

int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){      //taking input
        printf("Enter the number %d:-",i+1);
        scanf("%d",&num[i]);
    }
    int j=0;
    for(j=0;j<n;j++){
        if(j%2==0){
            num[j]=num[j]+10;
        }else{
            num[j]=num[j]*2;
        }
    }
     for(j=0;j<n;j++){
        printf("%d ",num[j]);
    }
    
    return 0;

}