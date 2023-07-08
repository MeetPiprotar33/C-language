#include<stdio.h>
#include<stdbool.h>
//M33T

/*
column 1 => serial number
column 2 => book number 
column 3 => roll number
column 4 => sem
column 5 => 0 for submitted and 1 for not submitted 
 */


int main(){

    int library[100][5];
    bool flag=true;
    int choice,num,book_num,choice_inquiry,book_number,book_row,roll_number,roll_row1,book_row1;
    bool roll_present1=false;
    bool book_present1=false;
    bool book_present=false;
    int k=0;
    int count=0;
    int roll_num;
    int book_time=0;
    int book_change;
    int roll_change;
    bool book_change1 =false;
    int book_change_row;
    bool return_check=false;

    while (flag==true){
        
        printf("\n\n");
        printf("Welcome sir/mam to library..\n");
        printf("\nEnter the choice : \n");
        printf(" 1. Issue new book \n");
        printf(" 2. return book \n");
        printf(" 3. check about not returned books\n");
        printf(" 4. Inquery about the book \n");
        printf(" 5. Chnage book \n");
        printf(" 6. print full data \n");
        printf(" 7. exit \t ");
        scanf("%d",&choice);

        switch (choice){

            case 1 : 
                library[count][0]=count+1;
                book_time=1;
                printf("Enter your roll number : ");
                scanf("%d",&roll_num);
                for (int i=0;i<count;i++){
                    if(library[i][2]==roll_num && library[i][4]==0) book_time++;
                }
                if(book_time<=3){
                library[count][2]=roll_num;
                printf("which book do you want to issue (book number) :");
                scanf("%d",&library[count][1]);
                printf("Enter your sem : ");                
                scanf("%d",&library[count][3]);
                library[count][4]=0;
                printf("Congratulation, Your book has been issed..");
                count=count+1;
                }else{
                    printf("Sorry You can Only issue 3 books at a time : ");
                }
                break;

            case 2:
                printf("Enter the book number you want to return : ");
                scanf("%d",&book_num);
                for(int i=0;i<100;i++){
                    if(library[i][1]==book_num){
                        book_row = i;
                        book_present=true;
                        break;                        
                    }
                }
                if(book_present==true){
                    printf("\nThank you..\n your book is submitted..\n");
                    library[book_row][4]=1;
                }else{
                    printf("\nSorry this book is not isssued yet . \n");
                }
                break;
            case 3:
                return_check=false;
                if(count!=0){
                    for (int i=0;i<count;i++){
                        if(library[i][4]==0){
                            printf("\nbook number :- %d roll no :- %d is not returened..\n",library[i][1],library[i][2]);
                            return_check=true;
                        }
                    }
                    if(return_check==false){
                        printf("Every book has been submitted..");
                    }
                }else{
                    printf("No books are issued yet. ");
                }
                break;
            case 4 : 
                printf("Though what do you want to inquiry about the book : ");
                printf("\n 1. book number.");
                printf("\n 2. roll number.");
                scanf("%d",&choice_inquiry);
                
                switch(choice_inquiry){

                    case 1:
                        printf("Enter the book number : ");
                        scanf("%d",&book_number);
                        for (int i=0;i<100;i++){
                            if (book_number==library[i][1]){
                                book_row1=i;
                                book_present1=true;
                            }
                        }  
                        if (book_present1==true){
                            printf("s.\tbooknum\trollnum\tsem\n");
                            for (int j=0;j<4;j++){
                                printf("%d\t",library[book_row1][j]);
                            }
                            if(library[book_row1][4]!=0){
                                printf(" submitted ");
                            }
                            else{
                                printf(" issued ");
                            }
                        }else{
                            printf("\nSorry this book is not issued yet ..");
                        }
                        break;
                    case 2: 
                        printf("Enter the roll number : ");
                        scanf("%d",&roll_number);
                        for (int i=0;i<count;i++){
                            if (roll_number==library[i][2]){
                                roll_row1=i;
                                roll_present1=true;
                            }
                        }
                        
                        if (roll_present1==true){
                            printf("s.\tbooknum\trollnum\tsem\n");
                            for (int j=0;j<=3;j++){
                                printf("%d\t",library[roll_row1][j]);
                            }
                            if(library[roll_row1][4]!=0){
                                printf(" submitted ");
                            }
                            else{
                                printf(" issued ");
                            }
                        }else{
                            printf("\nSorry this roll number is not issued book yet ..");
                        }
                        break;
                    default:
                        printf("Please enter valid choice..");

                }
                break;
            case 5 :
                printf("Enter issued Book number ");
                scanf("%d",&book_change);
                printf("Enter roll number ");
                scanf("%d",&roll_change);
                for (int i=0;i<=count;i++){
                    if (library[i][1]==book_change && library[i][2]==roll_change){
                        book_change1=true;
                        book_change_row=i;
                    }
                }
                if (book_change1==true){
                    printf("Enter the book you want to issue : ");
                    scanf("%d",&library[book_change_row][1]);
                    printf("\nSir/mam your book has been changed:-\n");
                }else{
                    printf("\nSorry, This book is not issued by you or not issued yet.");
                }
                break;
            
            case 6 :
                if(count!=0){
                printf("s\tbook\troll\tsem\n");
                for (int i=0;i<count;i++){
                    if(library[i][4]==1){
                        for(int j=0;j<4;j++){
                        printf("%d\t",library[i][j]);
                        }
                        printf("Subbmitted..");
                    }else{
                        for(int j=0;j<4;j++){
                        printf("%d\t",library[i][j]);
                        }
                        printf("issued..");
                    }
                    printf("\n");
                }
                }else{
                    printf("There is no book issued yet");
                }
                break;
            
            case 7 :
                printf("\nThank You for visiting ..");
                flag=false;
                break;
            
            default :
                printf("Please enter the valid choice ..\n");
        }
    } 
}        