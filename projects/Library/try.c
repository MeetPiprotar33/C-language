#include<stdio.h>
#include<stdbool.h>

// column 1 => serial number
// column 2 => book number 
// column 3 => roll number
// column 4 => sem
// column 5 => date 
// column 6 => month
// column 7 => year


int main(){

    static int library[1000][5];
    bool flag=true;
    int choice,num,book_num,choice_inquiry,book_number,book_row,roll_number,roll_row1,book_row1;
    bool roll_present1=false;
    bool book_present1=false;
    bool book_present=false;
    int k=0;

    while (flag==true){
        printf("Welcome sir/mam to library..\n");
        printf("\nEnter the choice : \n");
        printf(" 1. Issue new book \n");
        printf(" 2. return book \n");
        printf(" 3. Inquery about the book \n");
        printf(" 4. print full data \n");
        printf(" 5. exit \t ");
        scanf("%d",&choice);

        switch (choice){

            case 1 : 
                for (int i=0;i<1000;i++){
                    if(library[i][1]=='\0'){
                        num=i-1;
                        break;
                        }
                }
                library[num][1]=num+1;
                printf("which book do you want to issue (book number) :");
                scanf("%d",&library[num][2]);
                printf("Enter your roll number : ");
                scanf("%d",&library[num][3]);
                printf("Enter your sem : ");
                scanf("%d",&library[num][4]);
                library[num][5]=0;
                printf("Congratulation, Your book has been issed..");
                break;

            case 2:
                printf("Enter the book number you want to return : ");
                scanf("%d",&book_num);
                for(int i=0;i<1000;i++){
                    if(library[i][2]==book_num){
                        book_row = i;
                        book_present=true;
                        break;                        
                    }
                }
                if(book_present==true){
                    printf("Thank you..\n your book is submitted..\n");
                    library[book_row][5]=0;
                }else{
                    printf("\nSorry this book is not isssued yet . \n");
                }
                break;
            case 3 :
                printf("Though what do you want to inquer abou the book : ");
                printf("\n 1. book number.");
                printf("\n 2. roll number.");
                scanf("%d",&choice_inquiry);
                
                switch(choice_inquiry){

                    case 1:
                        printf("Enter the book number : ");
                        scanf("%d",&book_number);
                        for (int i=0;i<1000;i++){
                            if (book_number==library[i][2]){
                                book_row1=i;
                                book_present1=true;
                            }
                        }
                        if (book_present1==true){
                            printf("s.\tbooknum\trollnum\tsem\tissued\n");
                            for (int j=0;j<5;j++){
                                printf("%d\t",library[book_row1][j]);
                            }
                        }else{
                            printf("Sorry this book is not issued yet ..");
                        }
                        break;
                    case 2: 
                        printf("Enter the roll number : ");
                        scanf("%d",&roll_number);
                        for (int i=0;i<1000;i++){
                            if (roll_number==library[i][2]){
                                roll_row1=i;
                                roll_present1=true;
                            }
                        }
                        if (roll_present1==true){
                            if(library[roll_row1][5]==0)printf("s.\tbooknum\trollnum\tsem\tissued\n");
                            else printf("s.\tbooknum\trollnum\tsem\tsubbmitted\n");
                            for (int j=0;j<5;j++){
                                printf("%d\t",library[roll_row1][j]);
                            }
                        }else{
                            printf("Sorry this roll number is not issued yet ..");
                        }
                        break;
                    defaul:
                        printf("PLease neter valid choice..");

                }

            case 4 :
                printf("s.\tbooknum    rollnum    sem    issued\n");
                while(library[k][0]!='\0'){
                    for(int j=0;j<=5;j++){
                        printf("%d\t",library[k][j]);
                    }
                    printf("\n");
                    k++;
                }
                break;
            
            case 5 :
                printf("\nThank You for visiting ..");
                flag=false;
                break;
            
            default :
                printf("Please enter the valid choice ..");
        }
    }

 
}