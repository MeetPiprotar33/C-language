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
}account;


void printdetails(account meet[],int x){
    for (int i=0;i<x-1;i++){
        if (i==0)   printf("SR NO.\tNAME\t\t\tACC NO.  \tBALANCE AVAILABLE\n");
        printf("%d\t",meet[i].serialnumber);
        printf("%s ",meet[i].fname);
        printf("%s\t\t",meet[i].lname);
        printf("%d\t",meet[i].accNumber);
        printf("%d\t",meet[i].balance);
        printf("\n");
        }
}

void printone(account only){
    printf("SR NO.\tNAME\t\tACC NO.  \tBALANCE AVAILABLE");
    printf("\n");
    printf("%d\t",only.serialnumber);
    printf("%s ",only.fname);
    printf("%s\t",only.lname);
    printf("%d\t",only.accNumber);
    printf("%d\t",only.balance);
    printf("\n");
    return ;
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
    strcpy(accountlist[2].fname,"PABLU");
    strcpy(accountlist[2].lname,"YADAV");


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


    
    
    

    printf("_________________________Welcome_________________________\n");
    while(true){
        printdetails(accountlist,serialNumber);
        adminidwrongtransfer:
        printf("\nLOGIN AS \"ADMIN\" OR \"USER\" OR");
        printf("\nEXIT TO EXIT THE ATM :");
        scanf("%s",&login);

        convertToUpper(login);

        if (strcmp(login,"ADMIN")==0){
            char adminid[20];
            ReEnterAdminId:
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
                    bool adminloop=true;

                    while(adminloop==true){
                        int Adminchoice;
                        printf("=_-_=_-_=_-_=_-_=_-_=_-_=_-_=_-_=_-_=_-_\n");
                        printf("HELLO SIR WELCOME TO ADMIN PANEL :\n");
                        printf("ENTER YOUR CHOICE :\n");
                        printf("1.PRINT FULL DATA \n");
                        printf("2.ACCOUNT DELETE\n");
                        printf("3.BALANCE EDIT\t");
                        scanf("%d",&Adminchoice);
                        
                        if (Adminchoice==1){
                            printdetails(accountlist,serialNumber);
                        }
                        else if (Adminchoice==2){printf("meetaca");}
                        else if (Adminchoice==3){printf("meecact");}
                        else{
                            printf("PLEASE ENTER THE VALID CHOICE..\n");
                        }
                    }








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
            printf("=================WELCOME=================");

            while (accountatmloop==true){
                int accountexistance=0;
                printf("==========================================");
                printf("\nEnter Your choice :");
                printf("\n1.CREATE AN NEW ACCOUNT");
                printf("\n2.IF ALREADY HAD AN ACCOUNT ");
                printf("\n3.EXIT\t\t");
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

                    convertToUpper(accountfirstname);
                    convertToUpper(accountlastname);

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
                        printf("\nEnter Your choice :");
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
                            
                            accountundetected:
                            printf("ENTER THE ACCOUNT NUMBER : ");
                            scanf("%d",&depositaccountnumber);
                            for (int i=0;i<serialNumber;i++){
                                if(accountlist[i].accNumber==depositaccountnumber){
                                    accountavailable=true;
                                    accountaccessindex=i;
                                }
                            }
                            
                            if (accountavailable==true){
                                int cashdeposit;
                                depositeInNegative:
                                printf("Enter the amount you want to deposite : ");
                                scanf("%d",&cashdeposit);
                                if (cashdeposit>0){
                                    accountlist[accountaccessindex].balance=accountlist[accountaccessindex].balance+cashdeposit;
                                    printf("ACCOUNT DETAILS AFTER deposite\n");
                                        printone(accountlist[accountaccessindex]);
                                }else{
                                    printf("PLEASE ENTER AMOUNT IN POSITIVE\n");
                                    goto depositeInNegative; 
                                }


                            }
                            else{
                                int account_not_available;
                                accountnotfoundchoicewrong:
                                
                                printf("\nSorry this account is not avilable ..");
                                printf("what do you want do \n");
                                printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                printf("2.EXIT\t");
                                scanf("%d",&account_not_available);

                                if (account_not_available==1) goto accountundetected;
                                else if (account_not_available==2) break;
                                else {
                                    printf("\nInvalid choice..");
                                    goto accountnotfoundchoicewrong;
                                }
                            }

                        }
                        else if(atmoperations==2){
                            int WithdrawAccount;
                            bool accountavilableforwithdraw=false;
                            int accountwithdrawaccessindex=0;

                            accountwithdrawundetected:
                            printf("ENTER THE ACCOUNT NUMBER :");
                            scanf("%d",&WithdrawAccount);

                            for (int i=0;i<serialNumber;i++){
                                if(accountlist[i].accNumber==WithdrawAccount){
                                    accountavilableforwithdraw=true;
                                    accountwithdrawaccessindex=i;
                                }
                            }
                            if (accountavilableforwithdraw==true){
                                int pinforwithdraw;
                                pinreenter:
                                printf("ENTER THE ATM PIN :\t");
                                scanf("%d",&pinforwithdraw);

                                if (accountlist[accountwithdrawaccessindex].pin==pinforwithdraw){
                                    int amountwithdraw;
                                    printf("ENTER THE AMOUNT YOU WANT TO WITHDRAW :\t");
                                    scanf("%d",&amountwithdraw);

                                    if(amountwithdraw<accountlist[accountwithdrawaccessindex].balance){
                                        accountlist[accountwithdrawaccessindex].balance-=amountwithdraw;
                                        printf("YOUR CASH IS SUCCESSFULLY WITHDRWN..\n");
                                        printf("ACCOUNT DETAILS AFTER WITHDRAWN\n");
                                        printone(accountlist[accountwithdrawaccessindex]);
                                    }else{
                                        printf("SORRY YOU DO NOT HAVE SUFFICIENT BALANCE TO WITHDRAW..\n");
                                        break;
                                    }
                                }else{
                                    int wrongpinchoice;
                                    rechoiceforwrongpin:
                                    printf("SORRY ENTERED PIN IS WRONG \n");
                                    printf("what do you want do \n");
                                    printf("1. RE RENTER PIN .\n");
                                    printf("2.EXIT\t");
                                    scanf("%d",&wrongpinchoice);

                                    if(wrongpinchoice==1) goto pinreenter;
                                    else if(wrongpinchoice==2) break;
                                    else{
                                        printf("PLEASE ENTER VALID CHOICE :\n");
                                        goto rechoiceforwrongpin;
                                    }
                                }

                            }else{
                                int accountnotavilable;
                                accountnotfoundchoiceerror:
                                printf("\nSorry this account is not avilable ..");
                                printf("what do you want do \n");
                                printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                printf("2.EXIT\t");
                                scanf("%d",&accountnotavilable);

                                if(accountnotavilable==1) goto accountwithdrawundetected;
                                else if(accountnotavilable==2)  break;
                                else{
                                    printf("INVALID CHOICE \n");
                                    goto accountnotfoundchoiceerror;
                                }
                            }

                        }
                        else if(atmoperations==3){

                            int fromtransferaccount;
                            bool FromTransferAccountAvilable=false;
                            int FromTransferAccountAccessIndex;
                            
                            fromaccountwithdrawundetected:
                            printf("\bENTER YOUR ACCOUNT NUMBER");
                            scanf("%d",&fromtransferaccount);

                             for (int i=0;i<serialNumber;i++){
                                if(accountlist[i].accNumber==fromtransferaccount){
                                    FromTransferAccountAvilable=true;
                                    FromTransferAccountAccessIndex=i;
                                }
                            }
                            if(FromTransferAccountAvilable==true){
                                int totransferaccount;
                                bool toTransferAccountAvilable=false;
                                int toTransferAccountAccessIndex;
                                
                                toaccountwithdrawundetected:
                                printf("\bENTER ACCOUNT NUMBER WHERE YOU WANT TO TRANSFER THE AMOUNT :");
                                scanf("%d",&totransferaccount);

                                for (int i=0;i<serialNumber;i++){
                                    if(accountlist[i].accNumber==totransferaccount){
                                        toTransferAccountAvilable=true;
                                        toTransferAccountAccessIndex=i;
                                    }
                                }

                                if(toTransferAccountAvilable==true){
                                    int frompinforwithdraw;
                                    frompinreenter:
                                    printf("\nENTER THE ATM PIN :\t");
                                    scanf("%d",&frompinforwithdraw);

                                    if (accountlist[FromTransferAccountAccessIndex].pin==frompinforwithdraw){
                                        int amounttransfer;
                                        printf("\nENTER THE AMOUNT YOU WANT TO WITHDRAW :\t");
                                        scanf("%d",&amounttransfer);

                                        if(amounttransfer<accountlist[FromTransferAccountAccessIndex].balance){
                                            accountlist[FromTransferAccountAccessIndex].balance-=amounttransfer;
                                            accountlist[toTransferAccountAccessIndex].balance+=amounttransfer;
                                            printf("\nYOUR CASH IS SUCCESSFULLY TRANSFERED..\n");
                                            printf("\nACCOUNT DETAILS AFTER TRANSFER\n");
                                            printf("YOUR ACCOUNT DETAILS :\n");
                                            printone(accountlist[FromTransferAccountAccessIndex]);
                                            printf("THEIR ACCOUNT DETAILS :\n");
                                            printone(accountlist[toTransferAccountAccessIndex]);
                                        }else{
                                            printf("SORRY YOU DO NOT HAVE SUFFICIENT BALANCE TO TRANSFER..\n");
                                            break;
                                        }
                                    }else{
                                        int fromwrongpinchoice;
                                        fromrechoiceforwrongpin:
                                        printf("\n\nSORRY ENTERED PIN IS WRONG \n");
                                        printf("what do you want do \n");
                                        printf("1. RE RENTER PIN .\n");
                                        printf("2.EXIT\t");
                                        scanf("%d",&fromwrongpinchoice);

                                        if(fromwrongpinchoice==1) goto frompinreenter;
                                        else if(fromwrongpinchoice==2) break;
                                        else{
                                            printf("PLEASE ENTER VALID CHOICE :\n");
                                            goto fromrechoiceforwrongpin;
                                        }
                                    }

                                }else{
                                    int toaccountnotavilable;
                                    toaccountnotfoundchoiceerror:
                                    printf("\nSorry this account is not avilable ..");
                                    printf("what do you want do \n");
                                    printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                    printf("2.EXIT\t");
                                    scanf("%d",&toaccountnotavilable);

                                    if(toaccountnotavilable==1) goto toaccountwithdrawundetected;
                                    else if(toaccountnotavilable==2)  break;
                                    else{
                                        printf("INVALID CHOICE \n");
                                        goto toaccountnotfoundchoiceerror;
                                    }
                                }


                            }else{
                                int fromaccountnotavilable;
                                fromaccountnotfoundchoiceerror:
                                printf("\nSorry this account is not avilable ..");
                                printf("what do you want do \n");
                                printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                printf("2.EXIT\t");
                                scanf("%d",&fromaccountnotavilable);

                                if(fromaccountnotavilable==1) goto fromaccountwithdrawundetected;
                                else if(fromaccountnotavilable==2)  break;
                                else{
                                    printf("INVALID CHOICE \n");
                                    goto fromaccountnotfoundchoiceerror;
                                }
                            }

                        }
                        else if(atmoperations==4){
                            int pinchangeaccountnumber;
                            bool pinchangeaccountavailable=false;
                            int pinchangeaccountaccessindex;
                            
                            pinchange_account_undetected:
                            printf("ENTER THE ACCOUNT NUMBER : ");
                            scanf("%d",&pinchangeaccountnumber);
                            for (int i=0;i<serialNumber;i++){
                                if(accountlist[i].accNumber==pinchangeaccountnumber){
                                    pinchangeaccountavailable=true;
                                    pinchangeaccountaccessindex=i;
                                }
                            }
                            
                            if (pinchangeaccountavailable==true){

                                int pinchange_pin;
                                pinchange_pinreenter:
                                printf("ENTER THE PIN YOUR EXISTING PIN : \t");
                                scanf("%d",&pinchange_pin);

                                if(pinchange_pin==accountlist[pinchangeaccountaccessindex].pin){
                                    int newpin;
                                    pinchange_pinNotFourDigit:
                                    printf("ENTER THE NEW PIN :\t");
                                    scanf("%d",&newpin);

                                    if(newpin>=1000 && newpin<=9999){
                                        int newpincheck;
                                        printf("RE ENTER YOUR NEW PIN :\t");
                                        scanf("%d",&newpincheck);

                                        if (newpincheck==newpin){
                                            accountlist[pinchangeaccountaccessindex].pin=newpin;      
                                            printf("\nYOUR PIN IS SUCCESSFULLY CHANGED.\n");                                     
                                        }else{
                                            printf("Both PIN ENTERED ARE DIFFRENT ..\n");
                                            goto pinchange_pinNotFourDigit;
                                        }

                                    }else{
                                        printf("PLEASE ENTER 4 DIGIT PIN..\n");
                                        goto pinchange_pinNotFourDigit;
                                    }
                                }else{
                                    int pinchange_wrongpinchoice;
                                    pinchange_rechoiceforwrongpin:
                                    printf("SORRY ENTERED PIN IS WRONG \n");
                                    printf("what do you want do \n");
                                    printf("1. RE RENTER PIN .\n");
                                    printf("2.EXIT\t");
                                    scanf("%d",&pinchange_wrongpinchoice);

                                    if(pinchange_wrongpinchoice==1) goto pinchange_pinreenter;
                                    else if(pinchange_wrongpinchoice==2) break;
                                    else{
                                        printf("PLEASE ENTER VALID CHOICE :\n");
                                        goto pinchange_rechoiceforwrongpin;
                                    }
                                }                             

                            }else{
                                int pinchange_account_not_available;
                                pinchange_account_not_found_choice_wrong:
                                
                                printf("\nSorry this account is not avilable ..");
                                printf("what do you want do \n");
                                printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                printf("2.EXIT\t");
                                scanf("%d",&pinchange_account_not_available);

                                if (pinchange_account_not_available==1) goto pinchange_account_undetected;
                                else if (pinchange_account_not_available==2) break;
                                else {
                                    printf("\nInvalid choice..");
                                    goto pinchange_account_not_found_choice_wrong;
                                }
                            }
                        }
                        else if(atmoperations==5){
                            int InquiryAccount;
                            bool accountavilableforInquiry=false;
                            int accountInquiryAccessindex=0;

                            accountInquiryundetected:
                            printf("ENTER THE ACCOUNT NUMBER :");
                            scanf("%d",&InquiryAccount);

                            for (int i=0;i<serialNumber;i++){
                                if(accountlist[i].accNumber==InquiryAccount){
                                    accountavilableforInquiry=true;
                                    accountInquiryAccessindex=i;
                                }
                            }
                            if (accountavilableforInquiry==true){
                                int pinforInquiry;
                                Inquirypinreenter:
                                printf("ENTER THE ATM PIN :\t");
                                scanf("%d",&pinforInquiry);

                                if (accountlist[accountInquiryAccessindex].pin==pinforInquiry){
                                    printone(accountlist[accountInquiryAccessindex]);                                    
                                }else{
                                    int InquiryWrongpinchoice;
                                    Inquiryrechoiceforwrongpin:
                                    printf("SORRY ENTERED PIN IS WRONG \n");
                                    printf("what do you want do \n");
                                    printf("1. RE RENTER PIN .\n");
                                    printf("2.EXIT\t");
                                    scanf("%d",&InquiryWrongpinchoice);

                                    if(InquiryWrongpinchoice==1) goto Inquirypinreenter;
                                    else if(InquiryWrongpinchoice==2) break;
                                    else{
                                        printf("PLEASE ENTER VALID CHOICE :\n");
                                        goto Inquiryrechoiceforwrongpin;
                                    }
                                }

                            }else{
                                int Inquiryaccountnotavilable;
                                Inquiryaccountnotfoundchoiceerror:
                                printf("\nSorry this account is not avilable ..");
                                printf("what do you want do \n");
                                printf("1. RE RENTER ACCOUNT NUMBER .\n");
                                printf("2.EXIT\t");
                                scanf("%d",&Inquiryaccountnotavilable);

                                if(Inquiryaccountnotavilable==1) goto accountInquiryundetected;
                                else if(Inquiryaccountnotavilable==2)  break;
                                else{
                                    printf("INVALID CHOICE \n");
                                    goto Inquiryaccountnotfoundchoiceerror;
                                }
                            }
                        }
                        else if(atmoperations==6){
                            printf("Thank you\n");
                            operationloop=false;
                        }
                        else{
                            printf("Sorry Invalid Input..\n");
                        }
                    }
                }else if (accountexistance==3){
                    printf("THANK YOU FOR VISITING\n\n");
                    break;
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
