#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber() {
    srand(time(NULL));

    int randomNumber = rand() % 90000000 + 10000000;

    return randomNumber;
}

typedef struct account{
    int serialnumber;
    int accNumber;
    int pin;
    char fname[10];
    char lname[10];
    int balance;
    int transactions[15];
}account;


void printdetails(account meet[],int x){
    for (int i=0;i<x-1;i++){
            printf("%d\t%s\t%d\t%d",meet[i].serialnumber,meet[i].fname,meet[i].accNumber,meet[i].balance);
            printf("\n");
        }
}
void convertToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main(){
    //login 
    char login[8];
    account accountlist[10];
    int serialNumber=1;

    int accountexistance;
    bool accountatmloop=true;
    bool operationloop=true;

    //account making
    accountlist[0].serialnumber=serialNumber++; 
    accountlist[0].accNumber=10001010;
    accountlist[0].pin=2014;
    accountlist[0].balance=50000;
    strcpy(accountlist[0].fname,"MEET");
    strcpy(accountlist[0].lname,"PIPROTAR");


    accountlist[1].serialnumber=serialNumber++;
    accountlist[1].accNumber=10001011;
    accountlist[1].pin=1987;
    accountlist[1].balance=10000;
    strcpy(accountlist[1].fname,"DIXIT");
    strcpy(accountlist[1].lname,"PATIDAR");


    accountlist[2].serialnumber=serialNumber++;
    accountlist[2].accNumber=10001013;
    accountlist[2].pin=5648;
    accountlist[2].balance=25000;
    strcpy(accountlist[2].fname,"PRADIP");
    strcpy(accountlist[2].lname,"KUNVARIYA");


    accountlist[3].serialnumber=serialNumber++;
    accountlist[3].accNumber=10001015;
    accountlist[3].pin=2074;
    accountlist[3].balance=70000;
    strcpy(accountlist[3].fname,"ISHAN");
    strcpy(accountlist[3].lname,"SUTHAR");


    accountlist[4].serialnumber=serialNumber++;
    accountlist[4].accNumber=10001018;
    accountlist[4].pin=2514;
    accountlist[4].balance=24567;
    strcpy(accountlist[4].fname,"KHUSHI");
    strcpy(accountlist[4].lname,"VERMA");


    
    
    

    printf("***************************Welcome***************************\n");
    while(true){
        printdetails(accountlist,serialNumber);
        printf("\nLOGIN AS ADMIN OR USER ");
        printf("\nEXIT TO EXIT THE ATM :");
        scanf("%s",&login);

        convertToUpper(login);

        if (strcmp(login,"ADMIN")==0){}


        else if(strcmp(login,"USER")==0){

            while (accountatmloop==true){

                printf("=================WELCOME=================");
                printf("\nEnter Your choice :");
                printf("\n1.CREATE AN NEW ACCOUNT");
                printf("\n2.IF ALREADY HAD AN ACCOUNT ");
                printf("\n3.EXIT");
                scanf("%d",&accountexistance);
                

                if(accountexistance==1){
                    char accountfirstname[10];
                    char accountlastname[10];
                    int accountpin;
                    int pinsamecheck;

                    printf("\nEnter your first name :");
                    scanf("%s",&accountfirstname);
                    printf("Enter your last name :");
                    scanf("%s",&accountlastname);
                    notfourdigitpin:
                    pinnotsame:
                    printf("creat a pin (4 digit):");
                    scanf("%d",&accountpin);
                    if ((accountpin>=1000 && accountpin<=9999)){
                        printf("Re-Enter your pin :");
                        scanf("%d",&pinsamecheck);
                        if (accountpin==pinsamecheck){
                            int amountfirst;
                            amountless:
                            
                            printf("\nEnter the amount you want to deposit (minimum 1000 $):");
                            scanf("%d",&amountfirst);
                            if (amountfirst>1000){
                                int accountnumber = generateRandomNumber();
                                printf("Your account number is \"%d\"\n",accountnumber);
                                
                                accountlist[serialNumber-1].serialnumber=serialNumber++;
                                accountlist[serialNumber-2].accNumber=accountnumber;
                                accountlist[serialNumber-2].balance=amountfirst;
                                accountlist[serialNumber-2].pin=accountpin;
                                strcpy(accountlist[serialNumber-2].fname,accountfirstname);
                                strcpy(accountlist[serialNumber-2].lname,accountlastname);

                                printf("Congratulations your account has been created successfully..\n");                             
    
                            }else{
                                printf("Please enter amount more than 1000$\n");
                                goto amountless;
                            }
                        }else{
                            printf("\nsorry re Enterd pin in diffrent.\n");
                            goto pinnotsame;
                        }
                    }else{
                        printf("Please enter 4 digit pin \n");
                        goto notfourdigitpin;
                    }

                

                }else if (accountexistance==2){
                    int atmoperations;

                    while(operationloop==true){
                        printf("\n1.DEPOSIT CASH");
                        printf("\n2.WITHDRAW CASH");
                        printf("\n3.TRANSFER TO ANOTHER ACCOUNT");
                        printf("\n4.CHANGE PIN");
                        printf("\n5.CHECK BALANCE");
                        printf("\n6.EXIT\t");
                        scanf("%d",&atmoperations);

                        if (atmoperations==1){
                            int depositaccountnumber;
                            bool accountavailable=false;
                            int accountaccessindex;
                            int transactionindex=0;
                            accountundetected:
                            printf("ENTER THE ACCOUNT NUMBER : ");
                            scanf("%d",&depositaccountnumber);
                            for (int i=0;i<serialNumber;i++){
                                if(accountlist[i].accNumber==depositaccountnumber){
                                    accountavailable=true;
                                    accountaccessindex=i;
                                }
                            }
                            for (int i=0;i<accountaccessindex;i++){
                                if(accountlist[accountaccessindex].transactions[i]!='\0') transactionindex++;
                                else break;
                            }
                            if (accountavailable==true){
                                int cashdeposit;
                                depositeInNegative:
                                printf("Enter the amount you want to deposite : ");
                                scanf("%d",&cashdeposit);
                                if (cashdeposit>0){
                                    accountlist[accountaccessindex].balance=accountlist[accountaccessindex].balance+cashdeposit;
                                    accountlist[accountaccessindex].transactions[transactionindex]=cashdeposit;
                                    printdetails(accountlist,serialNumber);
                                }else{
                                    printf("PLEASE ENTER AMOUNT IN POSITIVE");
                                    goto depositeInNegative; 
                                }


                            }
                            else{
                                int account_not_available;
                                accountnotfoundchoicewrong:
                                
                                printf("\nSorry this account is not avilable ..");
                                printf("what do you want do \n");
                                printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                printf("2.EXIT");
                                scanf("%d",&account_not_available);

                                if (account_not_available==1) goto accountundetected;
                                else if (account_not_available==2) break;
                                else {
                                    printf("\nInvalid choice..");
                                    goto accountnotfoundchoicewrong;
                                }
                            }

                        }
                        else if(atmoperations==2){}
                        else if(atmoperations==3){}
                        else if(atmoperations==4){}
                        else if(atmoperations==5){}
                        else if(atmoperations==6){
                            printf("Thank you\n");
                            operationloop=false;
                        }
                        else{}
                    }
                }else if (accountexistance==3){
                    printf("Getting out to atmloop");
                    accountatmloop==false;
                }else {
                    printf("Invalid Choice");
                }
            }
        }
        else if (strcmp(login,"EXIT")==0){
            printf("THANK YOU FOR VSITING ..");
            break;

        }
        else {
            printf("Invalid Input");
            
            }
    }
}
