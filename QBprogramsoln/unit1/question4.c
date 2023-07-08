/* Develop an application program to convert and print distance between two cities in meter, feet,
inches & centimeters. The distance between two cities (in KM) is input through keyboard.*/

//M33T

#include<stdio.h>

int main(){
    
    float d;

    printf("Enter the distance between two cities in kilometer.:-");
    scanf("%f",&d);

    float meter=1000*d;
    float cemi=100*meter;
    float feet=3.28084*meter;
    float inch=12*feet;

    printf("\nThe distance between the cities in meter is %f",meter);
    printf("\nThe distance between the cities in centimeer is %f",cemi);
    printf("\nThe distance between the cities in feet is %f",feet);
    printf("\nThe distance between the cities in inches is %f",inch);
    
    return 0;
}