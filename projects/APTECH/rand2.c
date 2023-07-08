#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int main()
{
    int number, userno, a, count = 5;
    while (count > 0)
    {
        printf("Enter Any Number 0 To 99\n");
        scanf("%d", &userno);
        srand(time(NULL));
        number = rand() % 100;
        printf("\n\n\n\t\tNow Computer  Guessing  Number LOADING \n\t\t");
        for (a = 0; a < 10; a++)
        {
            Sleep(500);
            printf("...");
        }
        if (number == userno)
        {
            printf("Wow.......... You Win\n");
            printf("computer take number is %d\n", number);
            break;
        }
        else
        {
            printf("computer take number is %d\n", number);
            printf("Try Next Time\n");
        }
        count--;
        printf("\n%d Times remaining\n", count);
    }
    printf("Game Over");
    return 0;
}
