/* wap to print
*
##
***
####
*/

//M33T

#include<stdio.h>
int main(){

    int rows;
    char c;
    printf("Enter the number of rows:-");
    scanf("%d",&rows);

    for (int i = 1; i<=rows; i++)
    {
        if(i%2==0){
            c='#';
        }else{
            c='*';
        }
        for (int j = 1; j <=i; j++)
        {
            printf("%c ",c);

        }
        printf("\n");
    }
    

    return 0;

}