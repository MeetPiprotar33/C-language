#include<stdio.h>
//WAP to find the diffrence between the odd indexes values and even indexex values..

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
    int j=0,sum1=0,sum2=0;
    for(j=0;j<n;j++){
        if(j%2==0){
            sum1=sum1+num[j];
        }else{
            sum2=sum2+num[j];
        }
    }
    
    printf("The diffrence of odd even index is :- %d",sum1-sum2);
    
    return 0;

}