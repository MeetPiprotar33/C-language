//Define a structure data type called time_struct containing three member’s
//integer hours, minutes,second.
//Develop a program that would assign values to individual member
//and display the time in following format : HH:MM:SS

//M33T

#include<stdio.h>

int main(){
    typedef struct time_struct
    {
        int hours;
        int minutes;
        int seconds;
    }time;

    time variable;
    printf("Enter the hours :");
    scanf("%d",&variable.hours);
    printf("Enter the minutes :");
    scanf("%d",&variable.minutes);
    printf("Enter the seconds :");
    scanf("%d",&variable.seconds);

    printf("Time is (HH:MM:SS)=> %d:%d:%d",variable.hours,variable.minutes,variable.seconds);
    return 0;

    
}