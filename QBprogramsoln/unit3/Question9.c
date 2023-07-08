//Write a C program that reads number from 1 to 7 and accordingly itshould print MONDAY to SUNDAY.

//M33T

#include<stdio.h>
int main()
{
    int day;
    printf("Enter the number between 1 to 7..");
    scanf("%d",&day);
    switch(day){
        case 1: printf("today is monday");
            break;
        case 2: printf("today is tueday");
            break;
        case 3: printf("today is wednesday");
            break;
        case 4: printf("today is thursday");
            break;
        case 5: printf("friday hai bhenc....");
            break;
        case 6: printf("today is saturday");
            break;
        case 7: printf("today is sunday");
            break;
        default: printf("invalid input..");
            break;
    }
    return 0;
    
}