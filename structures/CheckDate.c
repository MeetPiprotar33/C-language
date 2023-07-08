//Create a structure 'date' that contains three members namely
//date, month and year. Create 2 structure variables with different 
//dates and now compare the two. If the dates are equal then display message as "Equal" otherwise "Unequal".

//M33T
#include<stdio.h>
#include<stdbool.h>

int main(){

    bool checkdate=true;
    typedef struct date
    {
       int day;
       int month;
       int year;
    }date;

    date first,second;

    printf("Enter the first date details: \n");
    printf("Day :");
    scanf("%d",&first.day);
    printf("Month :");
    scanf("%d",&first.month);
    printf("Year :");
    scanf("%d",&first.year);
    printf("Enter the second date details: \n");
    printf("Day :");
    scanf("%d",&second.day);
    printf("Month :");
    scanf("%d",&second.month);
    printf("Year :");
    scanf("%d",&second.year);

    if(first.day!=second.day) checkdate=false;
    if(first.month!=second.month) checkdate=false;
    if(first.year!=second.year) checkdate=false;

    if (checkdate==true) printf("The dates are equal..");
    else printf("The dates are not equal..");

    return 0;

    
}