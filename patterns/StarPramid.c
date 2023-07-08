/*
   *
  ***
 *****
*******
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:-");
    scanf("%d",&n);
    int nst=1;              //here nst ==number if stars
    for (int i=1;i<=n;i++){
        for (int j=n;j>i;j--){
            printf(" ");
        }
        for (int j=1;j<=nst;j++){
            printf("*");
        }
        printf("\n");
        nst=nst+2;
    }
    return 0 ;
}