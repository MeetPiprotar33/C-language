/*
A
A B
A B C
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
        printf("%c ",a+64);
        a++;
    }
    printf("\n");
}
return 0 ;
}