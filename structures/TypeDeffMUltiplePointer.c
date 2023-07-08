//Delcaring more tahn ne pointer in lin usinf tyoe deff
//M33T

#include<stdio.h>

typedef int* pointer;
int main(){

    int x=10,y=20;
    printf("x=>%d\ty=>%d\n",x,y);

    /* int* a=&x,b=&y;
    printf("Locaion of:\nx=>%p,y=>%p",a,b); */

    pointer m=&x,n=&y;

    printf("Locaion of:\nx=>%p,y=>%p",m,n);

    
}