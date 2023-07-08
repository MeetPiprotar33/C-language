#include<stdio.h>

//WAP to find the second maximum element.. 
//m33t

int main(){
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers:-");
    for(int i=0;i<n;i++){     
        scanf("%d",&num[i]);
    }

    int max=num[0],smax=num[0];
    for(int j=0;j<n;j++){
        if(max<num[j]){
            smax=max;
            max=num[j];
        }else if(num[j]>smax && num[j]!=max){
            smax=num[j];

        }
    }
    printf("The maximum element from the given array is:- %d\n",max);
    printf("The second maximum element from the given array is:- %d",smax);
    
    return 0;

}