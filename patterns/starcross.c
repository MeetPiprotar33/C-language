/*
 12345
1*   *
2 * * 
3  *
4 * * 
5*   *
HERE 12345 IS JUST FOR KNOWING THE ROW AND COLUMN..
*/
//M33T

#include<stdio.h>
int main()
{
int n;
printf("Enter the number of rows :-");
scanf("%d",&n);
if(n%2!=0){
    //int a=n/2+1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if((i==j )||(i+j==n+1)){
                printf("*");
            }else{printf(" ");}
        }
        printf("\n");
    }
}else{
    printf("Sorry, printing plus in even number is not possible..");}
return 0 ;
}