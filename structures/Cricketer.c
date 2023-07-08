//WAP to store the name ,avg, age, number of matches player by cricketers
//M33T

#include<stdio.h>
#include<string.h>

int main(){

    typedef struct Cricketer
    {
        char firstname[10];
        char lastname[10];
        int age;
        float average;
        int NumberOfMatchesPlayed;
    
    }Cricketer;

    int n;
    printf("Enter the number of players :");
    scanf("%d",&n);

    Cricketer arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the first name of the cricketer :");
        scanf("%s",&arr[i].firstname);
        printf("Enter the second name of the cricketer :");
        scanf("%s",&arr[i].lastname);
        printf("Enter the age of the cricketer :");
        scanf("%d",&arr[i].age);
        printf("Enter the average of the cricketer :");
        scanf("%f",&arr[i].average);
        printf("Enter the number of matches played of the cricketer :");
        scanf("%d",&arr[i].NumberOfMatchesPlayed);
    }

    for(int i=0;i<n;i++){
        
        printf("Enter the age of the cricketer \"%s %s\" is :%d\n",arr[i].firstname,arr[i].lastname,arr[i].age);
        printf("Enter the average of the cricketer \"%s %s\" is :%f\n",arr[i].firstname,arr[i].lastname,arr[i].average);
        printf("Enter the matches played of the cricketer \"%s %s\" is :%d\n\n",arr[i].firstname,arr[i].lastname,arr[i].NumberOfMatchesPlayed);
        
    }
    return 0;
}