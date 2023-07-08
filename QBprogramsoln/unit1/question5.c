// WAP to convert Celsius to Fahrenheit and vice versa.

//M33T

#include<stdio.h>
// for celcius to fahreinheit..
int main(){
    
    float c;

    printf("Enter the temperaure in celcius:-");
    scanf("%f",&c);

    float f=(1.8*c)+32;
    printf("\nThe temperature in fahrenheit is  %f",f);
    
    
    return 0;
}

/*for celcius to fahreinheit..
int main(){
    
    float f;

    printf("Enter the temperaure in celcius:-");
    scanf("%f",&f);

    float c=(f-32)*5/9;
    printf("\nThe temperature in fahrenheit is  %f",c);
    
    
    return 0;
}*/

