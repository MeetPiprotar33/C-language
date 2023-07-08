/*
1
1 3
1 3 5
1 3 5 7
*/
//M33T

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:-");
    scanf("%d",&n);

    for (int i=1;i<=n*2-1;i=i+2){

        for (int j=1;j<=i;j=j+2){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0 ;
}