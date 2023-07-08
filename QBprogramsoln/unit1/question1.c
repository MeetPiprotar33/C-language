//Write a program to find out an area of a circle.
//M33T

#include<stdio.h>

int main(){
    float r;
    printf("Enter the radius of the circle:-\t ");
    scanf("%f",&r);

    float area=3.1415927*r*r;

    printf("\nThe area of the circle is %f..",area);

    return 0;
}