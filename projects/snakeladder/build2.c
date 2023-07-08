//final build
//M33T

#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
    srand(time(NULL));  // seed the random number generator
    int a=(rand() % 6) + 1;
    return a;
}

void printbox(int box[10][10],int x){
    for (int i=0;i<10;i++){

        for(int j=0;j<10;j++){
        if(x==box[i][j]) printf(">|%d|<\t",box[i][j]);
        else printf("%d\t",box[i][j]);
        }
        printf("\n\n");
    }
    return ;
}

int main(){

    int box[10][10];
    int a=100;  
    bool game=true;
    //Making box                               
    for (int i=0;i<10;i++){
        for(int j=0;j<10;j++){
        box[i][j]=a;
        a--;
        }

    }
    for (int k=0;k<10;k++){
        for(int i=0,j=10-1;i<=j;i++,j--){
            if(k%2!=0){
                int temp=box[k][i];
                box[k][i]=box[k][j];
                box[k][j]=temp;
            }
        }
    }
    //box is made 
    int position=1;
    int start_game=0;
    bool win=false;
    printf("Welcome to M33T's snake and ladder game ");
    printf("Information about game :\n");
    printf("It is same as the regular game but here for throwing the dice you have to press 1..\n");
    printf("And to leave the game you have to press 0..");
    printf("\n\">| |<\" this represent the your position in the game..");
    printf("\nPress 1 to start the game :");
    scanf("%d",&start_game);
    

    
    if (start_game==1){
        printbox(box,position);
        while(game==true){
            int digit;

            printf("\nSnakes are from :-\t\'99\' to \'60\'\t\'94\' to \'80\'\t\'70\' to \'22\'");
            printf("\nLadderes are from :-\t\'20\' to \'40\'\t\'9\' to \'75\'\t\'80\' to \'96\'");
            printf("\nEnter 1 to Roll Dice OR 0 to Exit the game: ");
            scanf("%d",&digit);
            int dice=roll_dice();

            switch(digit){

                case 1: 
                    if (position==99){      // for snake 
                        printf("Snake has been biten you ..\n");
                        position=60;
                        printbox(box,position);

                        if(position!=100){
                            printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);
                                }

                            else{
                                position = position +dice ;
                                printf("The current position is %d\n",position);
                            }

                        }else{
                            goto won;
                        }

                    }else if(position==94){     // for snake 
                        printf("Snake has been biten you ..\n");
                        position=80;
                        printbox(box,position);
                        if(position!=100){
                            printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);
                            }
                            else    {
                                position = position +dice ;
                                printf("The current position is %d\n",position);
                            }

                        }else{
                            goto won;
                        }

                    }else if(position==70){         // for snake 
                        printf("Snake has been biten you ..\n");
                        position=22;
                        printbox(box,position);

                        if(position!=100){
                            printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);
                            }

                            else    {
                                position = position +dice ;
                                printf("The current position is %d\n",position);
                            }

                        }else{
                            goto won;
                        }

                    }else if(position==20){     // for ladder
                        printf("You had got the ladder ..\n");
                        position=40;
                        printbox(box,position);

                        if(position!=100){
                            printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);

                            }else{
                                position = position +dice ;
                                printf("The current position is %d\n",position);
                            }

                        }else{

                            goto won;
                        }


                    }else if(position==9){           // for ladder
                        printf("You had got the ladder ..");
                        position=75;
                        printbox(box,position);

                        if(position!=100){
                            printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100){
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);

                            }else{
                                position = position +dice ;
                                printf("The current position is %d\n",position);
                            }

                        }else{

                            goto won;

                        }

                    }else if(position==80){              // for ladder
                        printf("You had got the ladder ..\n");
                        position=96;
                        printbox(box,position);

                        if(position!=100){
                            printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100){
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);
                                
                            }else{

                                position = position +dice ;
                                printf("The current position is %d\n",position);

                            }

                        }else{

                            goto won;
                            
                        }

                    }else{
                        if(position!=100){           // for no ladder no snake
                        printf("\nthe dice result is : %d\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The current position is %d\n",position);
                                
                            }else{

                                position = position +dice ;
                                printf("The current position is %d\n",position);
                            }

                        }else{

                            goto won;

                    }
                    }
                        

                    break;

                case 0:

                    printf("Bas har man liye ..\n");
                    game = false;
                    break;

                default:

                    printf("Please enter 1 or 0 ");
                    break;

            }

            if(game==true){
                printbox(box,position);
                if (position==100) {
                    win =true;
                    goto won;
                    }
            }
        } 
    }else{
        printf("invalid choice..");
    }
    won:
        if(win==true){
            printf("Cangarusession\n You have won the game..");
        }

    printf("\nGreeting's By M33T PIPROTAR..... ");

    return 0;

}