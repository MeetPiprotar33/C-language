#include<stdio.h>
//find elemetns grater than x.
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
    int x;
    printf("Enter the value of 'X':- ");
    scanf("%d",&x);
    int j=0;
    for(j=0;j<n;j++){
        if(num[j]>x){
            printf("The number %d is greater than x(%d).\n",num[j],x);

        }
    }
    /*for(j=0;j<n;j++){
        printf("%d ",num[j]);
    }*/
    
    return 0;

}