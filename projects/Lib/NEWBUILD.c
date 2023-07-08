
//LIBRARY/* NEWONE */
//M33T

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>

typedef struct Book
{
    int bookserialnumber;
    int BookCode;
    char name[20];
    int NoOfPages;
    int Price;
    char Author[20];
}BookDetails;


typedef struct library
{
    int SerialNumber;
    int RollNumber;
    char fName[10];
    char lname[10];
    char BookName[15];
    bool Submitted;
    BookDetails book;

}library;

void convertToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main(){

    // main loop 
    bool mainloop=true;
    int AvailableBooks=9;   
    library lib[100];  //making array of library
    BookDetails book[AvailableBooks];
    int choice;
    bool flag=true;
    //for login 
    char login[10];
    char loginid[50];
    char loginpassword[10];

    //admin variables
    bool adminloop=true;
    int adminchoice;

    //case 1 admin
    
    char newbook[10];
    char newbookauthor[10];
    int newbookpages;
    int newbookprice;
    int newbookcode ;
    bool already_present=false;

    // case 2 admin
    char userinquiry[10];
    bool useravailable=false;
    //case 3 admin
    char bookinquiry[10];
    bool bookavailable=false;

    //case 4 admin
    char deleteuser[10];
    bool userdeletable=false;

    //case 1 variables
    char book_issue[20];
    bool book_issuable=false;
    char issue_fname[10];
    char issue_lname[10];
    int issue_number=1;
    int bookarraynum;
    int rollnoissues[10];
    int issuerollnumber;
    int issuenumcount=1;
    int i,j=0;
    //case 2 variables
    int return_choice;
    int return_number;
    bool returned=false;
    char return_name[10];
    //case 3 variable
    bool already_submitted=false;
    bool all_submitted=false;
    bool not_returned_books_available=false;
    //case 4 variables
    int choice_inquiry;
    char inquiryBookName[10];
    bool  booknameinquirable=false;
    int inquiryBookCode;
    bool bookcodeinquirable=false;
    char inquiryUserName[10];
    bool bookusernameinquirable=false;
    int inquiryRollnumber;
    bool Rollnumberinquirable=false;
    //case 5 variables
    int choice_change;
    char book_change_name[10];
    bool booknamechangable = false;
    char changedbook[10];
    int changebookarraynum;
    bool changebook_issuable=false;
    int book_change_code;
    int changedbookcode;
    bool bookcodechangable=false; 
    bool changebook_issuable_code=false;
    


    // book details giving 

    //book 1

    book[0].bookserialnumber=1;
    book[0].BookCode=1001;
    strcpy(book[0].name,"ANNA");
    strcpy(book[0].Author,"Leo Tolstoy");
    book[0].NoOfPages=500;
    book[0].Price=800;

    //book 2
    book[1].bookserialnumber=2;
    book[1].BookCode=1002;
    strcpy(book[1].name,"MADAME");
    strcpy(book[1].Author,"Gustave ");
    book[1].NoOfPages=300;
    book[1].Price=700;


    //book 3
    book[2].bookserialnumber=3;
    book[2].BookCode=1003;
    strcpy(book[2].name,"WAR");
    strcpy(book[2].Author,"Leo Tolstoy");
    book[2].NoOfPages=550;
    book[2].Price=880;


    //book 4
    book[3].bookserialnumber=4;
    book[3].BookCode=1004;
    strcpy(book[3].name,"GREAT");
    strcpy(book[3].Author,"Scottlore");
    book[3].NoOfPages=525;
    book[3].Price=800;


    //book 5
    book[4].bookserialnumber=5;
    book[4].BookCode=1005;
    strcpy(book[4].name,"LOLITA");
    strcpy(book[4].Author,"Vladimir");
    book[4].NoOfPages=560;
    book[4].Price=300;

    
    //book 6
    book[5].bookserialnumber=6;
    book[5].BookCode=1006;
    strcpy(book[5].name,"MIDMER");
    strcpy(book[5].Author,"George Eliot");
    book[5].NoOfPages=900;
    book[5].Price=1800;

    //book 7
    book[6].bookserialnumber=7;
    book[6].BookCode=1007;
    strcpy(book[6].name,"CATCHER");
    strcpy(book[6].Author,"George LINKTON");
    book[6].NoOfPages=950;
    book[6].Price=1700;

    //book 8
    book[7].bookserialnumber=8;
    book[7].BookCode=1008;
    strcpy(book[7].name,"MIDMAN");
    strcpy(book[7].Author,"Eliot INDOP");
    book[7].NoOfPages=700;
    book[7].Price=1500;

    //book 9
    book[8].bookserialnumber=9;
    book[8].BookCode=1009;
    strcpy(book[8].name,"MANHOOD");
    strcpy(book[8].Author,"jAKES KONL");
    book[8].NoOfPages=900;
    book[8].Price=1900;

    //book 10
    book[9].bookserialnumber=10;
    book[9].BookCode=1010;
    strcpy(book[9].name,"AUTHOR");
    strcpy(book[9].Author,"LAMES MALLOK");
    book[9].NoOfPages=908;
    book[9].Price=1000;

    
    printf("Welcome sir/mam to M33T's library..\n");    
    
    while(mainloop==true){
        printf("LOGIN AS ADMIN OR LOGIN AS USER.");
        printf("\nType admin for admin login and user for user login");
        printf("\nOR EXIT TO END THE PROGRAM ");
        scanf("%s",&login);

        convertToUpper(login);



        if (strcmp(login,"ADMIN")==0){
            idtransfer:
            printf("Enter your id please : \t");
            scanf("%s",&loginid);
            convertToUpper(loginid);
            
            if(strcmp(loginid,"PIPROTARMEET33@GMAIL.COM")==0){
                passwordtransfer:
                printf("ENTER YOUR PASSWORD : \t");
                scanf("%s",&loginpassword);
                convertToUpper(loginpassword);
                if(strcmp(loginpassword,"9106669489")==0){
                    printf("Hello sir Welcome ..\n");
                    while(adminloop==true){
                    
                        printf("Enter your choice\n");
                        printf("1.Create New Book\n");
                        printf("2.Inquiry about The user \n");
                        printf("3.Inquiry about book \n");
                        printf("4. Delete user data :\n");
                        printf("5. Exit\t");
                        scanf("%d",&adminchoice);

                        switch(adminchoice){

                            case 1:
                                i=0;
                                printf("Enter book Name :");
                                scanf("%s",&newbook);

                                convertToUpper(newbook);
                                while(book[i].bookserialnumber='\0'){
                                    if (strcmp(book[i].name,newbook)==0) already_present=true;
                                    i++;
                                }
                                if(already_present==false){
                                    printf("Name of author :");
                                    scanf("%s",&newbookauthor);
                                    printf("NUmber of pages :");
                                    scanf("%d",&newbookpages);
                                    printf("price :");
                                    scanf("%d",&newbookprice);
                                    printf("Enter book code : ");
                                    scanf("%d",&newbookcode);
                                    AvailableBooks++;

                                    book[AvailableBooks].bookserialnumber=AvailableBooks+1;
                                    book[AvailableBooks].BookCode=newbookcode;
                                    strcpy(book[AvailableBooks].name,newbook);
                                    strcpy(book[AvailableBooks].Author,newbookauthor);
                                    book[AvailableBooks].NoOfPages=newbookpages;
                                    book[AvailableBooks].Price=newbookprice;
                                    
                                }else{
                                    printf("The book you are trying to add is already present in the library..\n");
                                }

                            case 2:
                                i=0;
                                printf("Enter the name of user : ");
                                scanf("%s",&userinquiry);
                                
                                convertToUpper(userinquiry);
                                
                                while(book[i].bookserialnumber='\0'){
                                    if (strcmp(lib[i].fName,userinquiry)==0) useravailable=true;
                                    
                                    i++;
                                }

                                if(useravailable==true){
                                    for (int i=0;lib[i].SerialNumber!='\0';i++){
                                        if (strcmp(lib[i].fName,userinquiry)==0){
                                            printf("Name : %s %s\t",lib[i].fName,lib[i].lname);
                                            printf("issued book :%s\t",lib[i].BookName);
                                            printf("Roll no : %d\t",lib[i].RollNumber);
                                            printf("book code : %d\t",lib[i].book.BookCode);
                                            if(lib[i].Submitted==true){
                                                printf("Book is Submitted ");
                                            }else{
                                                printf("Book is not submitted");
                                            }
                                            
                                        }
                                    }

                                }else{
                                    printf("Sorry This user has not been issued any book ");
                                }
                                break; 

                            case 3:
                                i=0;
                                printf("Enter the name of user : ");
                                scanf("%s",&bookinquiry);
                                
                                convertToUpper(bookinquiry);
                                
                                while(book[i].bookserialnumber='\0'){
                                    if (strcmp(book[i].name,bookinquiry)==0) bookavailable=true;
                                    
                                    i++;
                                }

                                if(bookavailable==true){
                                    for (int i=0;i<=AvailableBooks;i++){
                                        if (strcmp(lib[i].fName,bookinquiry)==0){
                                        if (i==0) printf("SR NO.\tCODE\tBook name\tauthor name\t\tprice\t\tPages\n");
                                        printf("%d\t%d\t%s\t\t%s\t\t%d\t\t%d",i+1,book[i].BookCode,book[i].name,book[i].Author,book[i].Price,book[i].NoOfPages);
                                        printf("\n");
                                        }
                                    }                               

                                }else{
                                    printf("Sorry This user has not been issued any book \n");
                                }


                                break;   

                            case 4:
                                printf("Enter the name of the user : ");
                                scanf("%s",&deleteuser);

                                while(book[i].bookserialnumber='\0'){
                                    if (strcmp(lib[i].fName,deleteuser)==0) userdeletable=true;
                                    
                                    i++;
                                }
                                if (userdeletable==true){
                                    i=0;
                                    while(lib[i].SerialNumber!='\0'){
                                        if (strcmp(lib[i].fName,deleteuser)==0){
                                            j=0;
                                            while(lib[j].BookName!=lib[j+1].BookName){
                                                strcpy(lib[j].BookName,lib[j+1].BookName);
                                                strcpy(lib[j].fName,lib[j+1].fName);
                                                strcpy(lib[j].lname,lib[j+1].lname);
                                                lib[j].RollNumber=lib[j+1].RollNumber;
                                                lib[j].Submitted=lib[j+1].Submitted;
                                                lib[j].SerialNumber=lib[j+1].SerialNumber;
                                                j++;
                                            }
                                        }
                                        i++;
                                    }


                                }else{
                                    printf("Sorry user is not issued any book yet ..\n");
                                }
                                
                                break;

                            case 5:
                                printf("Thanks Sir (to admin BY M33T PIPORTAR)");
                                adminchoice=false;

                            default:
                                printf("Enter the valid choice .. \n");

                        }

                    }                
                }else{
                    printf("The entered password is wrong .");
                    goto passwordtransfer;
                }
            }else{
                printf("The enterd id is wrong..\n");
                goto idtransfer;
            }


        }else if (strcmp(login,"USER")==0){
        
            while (flag==true){
            
            printf("The list of available books are :\n");

            for (int i=0;i<=AvailableBooks;i++){
                if (i==0) printf("SR NO.\tCODE\tBook name\tauthor name\t\tprice\t\tPages\n");
                printf("%d\t%d\t%s\t\t%s\t\t%d\t\t%d",i+1,book[i].BookCode,book[i].name,book[i].Author,book[i].Price,book[i].NoOfPages);
                printf("\n");
            }
            printf("\nEnter the choice : \n");
            printf(" 1. Issue new book \n");
            printf(" 2. return book \n");
            printf(" 3. check about not returned books\n");
            printf(" 4. Inquery about the book \n");
            printf(" 5. Change book \n");
            printf(" 6. print full data \n");
            printf(" 7. exit \t\t ");
            scanf("%d",&choice);

            switch (choice){

                case 1 :
                    issuenumcount=0;
                    printf("Enter your roll number :");
                    scanf("%d",&issuerollnumber);
                    
                    for(int i=0;i<issue_number;i++){
                        if (rollnoissues[i]==issuerollnumber) issuenumcount++;
                    }
                    if(issuenumcount<=3){
                        rollnoissues[issue_number-1]=issuerollnumber;
                        printf("Enter the book name you want to issue : ");
                        scanf("%s",&book_issue);

                        convertToUpper(book_issue);

                        for (int i=0;i<=AvailableBooks;i++){
                            if(strcmp(book[i].name,book_issue)==0) {
                            bookarraynum=i;
                            book_issuable=true; 
                            break;
                            }
                        }

                        if (book_issuable==true){

                            printf("Enter Your first name :");
                            scanf("%s",&issue_fname);

                            printf("Enter Your last name :");
                            scanf("%s",&issue_lname);  

                            convertToUpper(issue_fname);

                            convertToUpper(issue_lname);

                            strcpy(lib[issue_number-1].fName,issue_fname);

                            strcpy(lib[issue_number-1].lname,issue_lname);

                            strcpy(lib[issue_number-1].BookName,book[bookarraynum].name);

                            lib[issue_number-1].book=book[bookarraynum];

                            lib[issue_number-1].RollNumber=issuerollnumber;
                        
                            lib[issue_number-1].SerialNumber=issue_number;
                            issue_number=issue_number+1;
                            lib[issue_number-1].Submitted=false;
                            
                            printf("Congratuations Your book has been issued successfully..\n");
                        }else{
                            printf("Sorry This book is not available..\n");
                        } 
                    }else{
                        printf("Sorry you can issue only 3 books at a time ..");
                    }
                    break;

                case 2:
                    if (rollnoissues[0]!='\0'){

                        printf("Through what you want to return book :");
                        printf("\n1.Book number");
                        printf("\n2.Book Name");
                        scanf("%d",&return_choice);


                        switch(return_choice){

                            case 1:

                                i=0;
                                printf("Enter the book number :\t");
                                scanf("%d",&return_number);
                                while(lib[i].SerialNumber!='\0'){
                                    if (return_number==lib[i].book.BookCode) {
                                        lib[i].Submitted=true;
                                        returned=true;
                                        if (lib[i].Submitted==true){
                                            already_submitted=true;
                                        }
                                        break;
                                    }
                                }
                                if(already_submitted==true){
                                    if (returned==true){
                                        printf("Your book has been returned successfully..\n");
                                    }else{
                                        printf("Sorry book code %d is not issued yet",return_number);
                                    }
                                }else{
                                    printf("This book already submitted..\n");
                                }

                                break;

                            case 2:

                                i=0;
                                already_submitted==false;

                                printf("Enter the name of the book :\t");
                                scanf("%s",&return_name);

                                convertToUpper(return_name);
                                while (lib[i].SerialNumber!='\0'){
                                    
                                    if(strcmp(lib[i].BookName,return_name)==0) {
                                        lib[i].Submitted=true;
                                        returned=true;
                                        if (lib[i].Submitted==true){
                                            already_submitted=true;
                                        }
                                        break;
                                    }
                                }
                                if(already_submitted==false){
                                    if (returned==true){
                                        printf("Your book has been returned successfully..");
                                    }else{
                                        printf("Sorry book code %d is not issued yet",return_number);
                                    }
                                }else{
                                    printf("This book already submitted..\n");
                                }

                                break;

                            default:
                                printf("Please enter valid choice..");  
                        }

                    }else{
                        printf("No books has been issued yet..\n");
                    }


                    break;

                case 3 :
                    if (rollnoissues[0]!='\0'){
                        i=0;

                        while(lib[i].SerialNumber!='\0'){
                            if(lib[i].Submitted==false){
                                not_returned_books_available=true;
                                break;
                            }

                            i++;
                        }

                        if (not_returned_books_available==true){

                            printf("List of not reurned books are \n");
                            while(lib[i].SerialNumber!='\0'){
                                if(lib[i].Submitted==false){
                                    
                                    printf("Serial Number : %d\t",lib[i].SerialNumber);
                                    printf("book code : %d",lib[i].book.BookCode);
                                    printf("\tName : %s %s",lib[i].fName,lib[i].lname);
                                    printf("\tRoll no. %d",lib[i].RollNumber);
                                    printf("\tBook name :%s\n",lib[i].BookName);
        
                                }
                                i++;
                            }
                        }else{
                            printf("All books have been returned..\n");
                        }

                    }else{
                            printf("No books has been issued yet..\n");
                        }
                    

                    break;

                case 4 :

                    if (rollnoissues[0]!='\0'){
                        i=0;

                        printf("Through waht you wanted to inquire about thw book : ");
                        printf("\n1.Book Name ");
                        printf("\n2.Book Code");
                        printf("\n3.Issuer Name ");
                        printf("\n4.Roll Number :\t");

                        scanf("%d",&choice_inquiry);
                        
                        switch(choice_inquiry){
                            
                            case 1:
                                printf("Enter the Book name :\t");
                                scanf("%s",&inquiryBookName);

                                convertToUpper(inquiryBookName);

                                i=0;
                                while(lib[i].SerialNumber!='\0'){
                                    if(strcmp(lib[i].BookName,inquiryBookName)==0) booknameinquirable=true;
                                    i++;
                                }

                                if (booknameinquirable==true){i=0;
                                while(lib[i].SerialNumber!='\0'){
                                    if(strcmp(lib[i].BookName,inquiryBookName)==0){

                                        printf("Serial Number : %d",lib[i].SerialNumber);
                                        printf("\tbook code : %d",lib[i].book.BookCode);
                                        printf("\tName : %s %s",lib[i].fName,lib[i].lname);
                                        printf("\tRoll no. %d",lib[i].RollNumber);
                                        printf("\tBook name :%s\t",lib[i].BookName);

                                        if (lib[i].Submitted ==true){
                                            printf("Submitted\n");
                                        }else{

                                            printf("Not submitted\n");
                                        }
                                    } 
                                    i++;
                                }
                                }else{
                                    printf("Sorry %s book is not issued ",inquiryBookName);
                                }
                            
                                break;
                            
                            case 2:

                                printf("Enter the Book code :\t");
                                scanf("%d",&inquiryBookCode);
                                

                                i=0;
                                while(lib[i].SerialNumber!='\0'){

                                    if(inquiryBookCode==lib[i].book.BookCode) bookcodeinquirable=true;
                                    i++;
                                }

                                if (bookcodeinquirable==true){i=0;
                                while(lib[i].SerialNumber!='\0'){
                                    if(inquiryBookCode==lib[i].book.BookCode){
                                        
                                        printf("Serial Number : %d",lib[i].SerialNumber);
                                        printf("\tbook code : %d",lib[i].book.BookCode);
                                        printf("\tName : %s %s",lib[i].fName,lib[i].lname);
                                        printf("\tRoll no. %d",lib[i].RollNumber);
                                        printf("\tBook name :%s\t",lib[i].BookName);

                                        if (lib[i].Submitted ==true){
                                            printf("Submitted\n");

                                        }else{
                                            printf("Not submitted\n");
                                        }
                                    } 

                                    i++;
                                }
                                }else{
                                    printf("Sorry book with code %d is not issued ",inquiryBookCode);
                                }
                            
                                break;
                            
                            case 3:
                                printf("Enter the user name :\t");
                                scanf("%s",&inquiryUserName);

                                convertToUpper(inquiryUserName);

                                i=0;
                                while(lib[i].SerialNumber!='\0'){
                                    if(strcmp(lib[i].fName,inquiryUserName)==0) bookusernameinquirable=true;
                                    i++;
                                }

                                if (bookusernameinquirable==true){
                                i=0;
                                while(lib[i].SerialNumber!='\0'){

                                    if(strcmp(lib[i].fName,inquiryUserName)==0){

                                        printf("Serial Number : %d",lib[i].SerialNumber);
                                        printf("\tbook code : %d",lib[i].book.BookCode);
                                        printf("\tName : %s %s",lib[i].fName,lib[i].lname);
                                        printf("\tRoll no. %d",lib[i].RollNumber);
                                        printf("\tBook name :%s\t",lib[i].BookName);

                                        if (lib[i].Submitted ==true){
                                            printf("Submitted\n");

                                        }else{
                                            printf("Not submitted\n");
                                        }
                                    } 

                                    i++;
                                }

                                }else{
                                    printf("Sorry %s has not issued ",inquiryUserName);
                                }
                            
                                break;
                            
                            case 4:

                                printf("Enter the Roll Number :\t");
                                scanf("%d",&inquiryRollnumber);

                                i=0;

                                while(lib[i].SerialNumber!='\0'){
                                    if(inquiryRollnumber==lib[i].RollNumber) Rollnumberinquirable=true;
                                    i++;
                                }

                                if (Rollnumberinquirable==true){

                                i=0;

                                while(lib[i].SerialNumber!='\0'){
                                    if(inquiryRollnumber==lib[i].RollNumber){

                                        printf("Serial Number : %d",lib[i].SerialNumber);
                                        printf("\tbook code : %d",lib[i].book.BookCode);
                                        printf("\tName : %s %s",lib[i].fName,lib[i].lname);
                                        printf("\tRoll no. %d",lib[i].RollNumber);
                                        printf("\tBook name :%s\t",lib[i].BookName);
                                        if (lib[i].Submitted ==true){

                                            printf("Submitted\n");

                                        }else{
                                            printf("Not submitted\n");
                                        }
                                    } 
                                    i++;
                                }
                                }else{
                                    printf("Sorry book with code %d is not issued ",inquiryBookCode);
                                }
                            
                                break;
                            
                            default:
                                printf("Please enter valid choice..\n");
                                

                        }
                        
                    }else{
                            printf("No books has been issued yet..\n");
                        }

                    break;

                case 5 :

                    if (rollnoissues[0]!='\0'){
                        
                        printf("Through waht you wanted to change the book :\n");
                        printf("1.Book name\n");
                        printf("2.Book Code :\t");

                        scanf("%d",&choice_change);

                        switch(choice_change){
                            
                            case 1:  

                                printf("Enter the Book name :\t");
                                scanf("%s",&book_change_name);

                                convertToUpper(book_change_name);

                                i=0;

                                while(lib[i].SerialNumber!='\0'){
                                    if(strcmp(lib[i].BookName,book_change_name)==0) booknamechangable=true;
                                    i++;
                                }

                                if (booknamechangable==true){

                                i=0;

                                while(lib[i].SerialNumber!='\0'){

                                    if(strcmp(lib[i].BookName,book_change_name)==0){
                                        label:

                                        printf("Enter the name of changed book");
                                        scanf("%s",&changedbook);

                                        convertToUpper(book_issue);

                                        for (int j=0;j<=AvailableBooks;j++){
                                            if(strcmp(book[j].name,book_issue)==0) {
                                            changebookarraynum=j;
                                            changebook_issuable=true; 
                                            break;
                                            }
                                        }

                                        if (changebook_issuable==true){
                                            strcpy(lib[issue_number-1].BookName,book[bookarraynum].name);
                                            printf("Your Book has successfully changed");
                                        }else{
                                            printf("please Enter the valid book name\n");
                                            goto label;
                                        }
                                        
                                    } 
                                    i++;
                                }
                                }else{
                                    printf("Sorry book is not issued ");
                                }
                            
                                break;


                            case 2:
                                printf("Enter the Book code :\t");
                                scanf("%d",&book_change_code);

                                i=0;

                                while(lib[i].SerialNumber!='\0'){

                                    if(lib[i].book.BookCode==book_change_code) bookcodechangable=true;
                                    i++;
                                }

                                if (bookcodechangable==true){

                                i=0;
                                while(lib[i].SerialNumber!='\0'){
                                    if(lib[i].book.BookCode==book_change_code){

                                        label1:

                                        printf("Enter the code of changed book ");
                                        scanf("%d",&changedbookcode);
                                        
                                        for (int j=0;j<=AvailableBooks;j++){

                                            if(lib[j].book.BookCode==book_change_code){

                                            changebookarraynum=j;
                                            changebook_issuable_code=true; 
                                            break;

                                            }
                                        }
                                        if (changebook_issuable_code==true){

                                            strcpy(lib[issue_number-1].BookName,book[bookarraynum].name);
                                            printf("Your Book has successfully changed\n");

                                        }else{

                                            printf("please Enter the valid book code\n");
                                            goto label1;

                                        }
                                        
                                    } 
                                    i++;
                                }
                                }else{
                                    printf("Sorry book is not issued ");
                                }
                            
                                break;

                        }

                    }else{
                            printf("No books has been issued yet..\n");
                        }

            
                    break;
                
                case 6 :
                    if(lib[0].SerialNumber!='\0'){

                        i=0;

                        while(lib[i].SerialNumber!='\0'){

                            printf("Serial Number : %d",lib[i].SerialNumber);
                            printf("\nName : %s %s",lib[i].fName,lib[i].lname);
                            printf("\tRoll no. %d",lib[i].RollNumber);
                            printf("\tBook name :%s\t",lib[i].BookName);

                            if (lib[i].Submitted==false) {
                                printf("BOOK Not Submitted yet..\n");
                            }else {
                                printf("Submitted\n");
                            }
                            
                            i++;
                        }

                    }else{
                        printf("\nNo books issued yet..\n");
                    }


                    break;
                
                case 7 :

                    printf("THANK YOU FOR VISITING MY LIBRABY (GREETING BY M33T PIPROTAR)");
                    flag=false;
                    break;
                

                default :
                    printf("Please enter the valid choice ..\n");

            }
        }
        }else if (strcmp(login,"EXIT")==0){
            printf("THANK YOU \n GREETINGS BY MEET PIPROTAR");
            mainloop=false;
            
        }else{
            printf("Enter valid choice:\n");
        }
    }
    return 0;
}
