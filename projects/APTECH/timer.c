#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
void sound()
{
    Beep(2000,2000);
    
}
void main()
{
    int hour=0,minute=0,second=0,i;
    system("CLS");
    printf("\t\t\t\t\tEnter Hours:");
    scanf("%d",&hour);
    printf("\n\t\t\t\t\tEnter Minutes:");
    scanf("%d",&minute);
    printf("\n\t\t\t\t\tEnter Seconds:");
    scanf("%d",&second);
    while(1)
    {
        system("CLS");
        system("color 74");
        printf("\t\t\t\t\tYour Timer's Is Start......\n\n");
        printf("\r\t\t\t\t\t %d : %d : %d ",hour,minute,second);
        Sleep(1000);
        if(second!=0)
        {
            second--;
        }
        if(second==0 && minute!=0)
        {
            second=59;
            minute--;
        }
        if(second==0 && minute==0 && hour!=0)
        {
            hour--;
            minute=59;
            second=59;
        }
        if(second==0 && minute==0 && hour==0)
        {
        printf("\n\n\t\t\t\t\tYour Timer Is Complete......");
        sound();
        exit(0);
        }
    }

    getch();
    }