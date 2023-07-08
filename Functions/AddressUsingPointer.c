#include<stdio.h>
/* printf("%p",&a) -> gives the address of the a 
printf("%d",a)  -> gives the value that is stored in the variable
printf("%p",x)  -> gives the address of the variable which the ponter *x denotes
printf("%d",*x) -> gives the value that is stored in the variable which pointer denotes
 */
//M33T

int main(){

    int a=10;
    int* x= &a;

    printf("The value of a is %d \n",a);
    printf("The address of the a is %p\n",&a);

    printf("The address of a is %p\n",x);
    printf("The address of the pointer x is %p\n",&x);

    printf("The value of the a is %d",*x);

    

}