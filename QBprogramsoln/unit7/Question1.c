//Define a structure called cricket that will describe the followinginformation:
//a. Player name
//b. Team name
//c. Batting average

//M33T

#include<stdio.h>
#include<string.h>

int main(){
    typedef struct Cricket{
        char PlayerName[30];
        char TeamName[15];
        float BattingAverage;
    };
    return 0;
}
