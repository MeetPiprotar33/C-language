#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

typedef struct flightdetails{
    char source[20];
    char destinatio[20];
    int num;
    int cost;
}flightdetails;

typedef struct details{
    int passportnum;
    char fname[10];
    char lname[10];
    char email[20];
    flightdetails flight;    
}passengerdetails;

void convertToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

char* generate_random_string() {
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int length = 10;
    char* random_string = (char*)malloc((length + 1) * sizeof(char));  

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(characters) - 1);
        random_string[i] = characters[index];
    }

    random_string[length] = '\0';  

    return random_string;
}

int main(){
    
    char login[10];

    flightdetails flightlist[10];
    passengerdetails passngerlist[10];

    strcpy(flightlist[0].source,"AHMEDABAD");
    strcpy(flightlist[0].destinatio,"JAMNAGAR");
    flightlist[0].num=10000101;
    flightlist[0].cost=5000;

    strcpy(flightlist[1].source,"AHMEDABAD");
    strcpy(flightlist[1].destinatio,"VADODARA");
    flightlist[1].num=10000102;
    flightlist[1].cost=7000;

    strcpy(flightlist[2].source,"SURAT");
    strcpy(flightlist[2].destinatio,"JAMNAGAR");
    flightlist[2].num=10000103;
    flightlist[2].cost=4100;

    strcpy(flightlist[3].source,"SURAT");
    strcpy(flightlist[3].destinatio,"RAJKOT");
    flightlist[3].num=10000104;
    flightlist[3].cost=2200;

    strcpy(flightlist[4].source,"RAJKOT");
    strcpy(flightlist[4].destinatio,"VADODARA");
    flightlist[4].num=10000105;
    flightlist[4].cost=2300;

    strcpy(flightlist[5].source,"VADODARA");
    strcpy(flightlist[5].destinatio,"RAJKOT");
    flightlist[5].num=10000106;
    flightlist[5].cost=2500;


    

    while(true){

        adminidwrongtransfer:
        printf("\nLOGIN AS \"ADMIN\" OR \"USER\" OR");
        printf("\nEXIT TO EXIT THE ATM :");
        scanf("%s",&login);

        convertToUpper(login);

        if (strcmp(login,"ADMIN")==0){
            char adminid[20];
            ReEnterAdminId:

            printf("***********************************************\n");
            printf("******************ADMIN PANEL******************\n");
            printf("***********************************************\n");
            printf("PLEASE ENTER YOUR ID SIR : ");
            scanf("%s",&adminid);
            convertToUpper(adminid);
            if (strcmp(adminid,"PIPROTARMEET33@GMAIL.COM")==0){
                char adminPassword[20];
                ReEnterAdminPassword:
                printf("PLEASE ENTER YOUR ID PASSWORD : ");
                scanf("%s",&adminPassword);
                convertToUpper(adminPassword);
                if (strcmp(adminPassword,"9106669489")==0){
                    

                }else{
                    int adminPasswordwrong;
                    printf("THE ENTERED USER PASSWORD IS WRONG ..\n");
                    AdminPasswordWrongChoiceWrong:
                    printf("ENTER YOUR CHOICE \n");
                    printf("1.RE ENTER ADMIN ID \n");
                    printf("2.EXIT\t");
                    scanf("%d",&adminPasswordwrong);

                    if(adminPasswordwrong==1) goto ReEnterAdminPassword;
                    else if(adminPasswordwrong==2) goto adminidwrongtransfer;
                    else{
                        printf("PLEASE ENTER VALID CHOICE \n");
                        goto AdminPasswordWrongChoiceWrong;
                    }

                }
            }else{
                int adminidwrong;
                printf("THE ENTERED USER ID IS WRONG ..\n");
                AdminIdWrongChoiceWrong:
                printf("ENTER YOUR CHOICE \n");
                printf("1.RE ENTER ADMIN ID \n");
                printf("2.EXIT\t");
                scanf("%d",&adminidwrong);

                if(adminidwrong==1) goto ReEnterAdminId;
                else if(adminidwrong==2) goto adminidwrongtransfer;
                else{
                    printf("PLEASE ENTER VALID CHOICE \n");
                    goto AdminIdWrongChoiceWrong;
                }

            }

        }else if(strcmp(login,"USER")==0){
            printf("**********************************************\n");
            printf("******************USER PANEL******************\n");
            printf("**********************************************\n");
            printf("___________________WELCOME____________________\n");
            //printf("%s",generate_random_string());
        }
        else if (strcmp(login,"EXIT")==0){
            printf("THANK YOU FOR VISITING M33T'S AIRLINES..");
            break;

        }
        else {
            printf("Invalid Input");
            
            }
    }
}