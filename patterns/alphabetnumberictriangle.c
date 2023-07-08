/*
1
A B
1 2 3
A B C D
*/
//M33T

#include<stdio.h>
int main()
{
int n;
printf("Enter the number of rows:-");
scanf("%d",&n);

for (int i=1;i<=n;i++){
    int a=1;
    for (int j=1;j<=i;j++){
        if(i%2==0){
            printf("%c ",a+64);
        }else{
            printf("%d ",j);
        }
        a++;
    }
    printf("\n");
    }
    return 0 ;
}