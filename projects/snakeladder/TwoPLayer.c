//final build for teo player
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

void printbox(int box[10][10],int x,int y){
    for (int i=0;i<10;i++){

        for(int j=0;j<10;j++){
        if (x==box[i][j] && y==box[i][j])  printf("\033[0;30m\033[0;30m\033[4m\033[1m%d\033[0m\t",box[i][j]);
        else if(y==box[i][j])              printf("\033[0;34m\033[4m\033[1m%d\033[0m\t",box[i][j]);
        else if(x==box[i][j])              printf("\033[0;33m\033[4m\033[1m%d\033[0m\t",box[i][j]);
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
    int positionx=1;
    int start_game=0;
    bool win=false;
    bool secondwin=false;
    bool firstwin=false;
    printf("\033[0;31mWelcome to M33T's snake and ladder game ");
    printf("Information about game :\n");
    printf("It is same as the regular game but here for throwing the dice you have to press 1..\n");
    printf("And to leave the game you have to press 0..\n");
    printf("\033[0;33mYellow color is for first player \033[0m\n");
    printf("\033[0;34mblue color is for first player \033[0m\n");
    printf("\nPress 1 to start the game :");
    scanf("%d",&start_game);
    printbox(box,position,positionx);


    
    if (start_game==1){
        while(game==true){
            int digit;

            printf("\nSnakes are from :-\t\'99\' to \'60\'\t\'94\' to \'80\'\t\'70\' to \'22\'");
            printf("\nLadderes are from :-\t\'20\' to \'40\'\t\'9\' to \'75\'\t\'80\' to \'96\'\n");

            first_reroll:
            printf("First player's turn (\"press 1 for roll the dice\"): ");
            scanf("%d",&digit);
            int dice=roll_dice();

            switch(digit){

                case 1: 
                    if (position==99){      // for snake 
                        printf("Player one has biten by snake  ..\n");
                        position=60;
                        printbox(box,position,positionx);

                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                                }

                            else{
                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{
                            
                            firstwin=true;
                            goto win;
                        }

                    }else if(position==94){     // for snake 
                        printf("Player one has biten by snake  ..\n");
                        position=80;
                        printbox(box,position,positionx);
                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }
                            else    {
                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{
                            
                            firstwin=true;
                            goto win;
                        }

                    }else if(position==70){         // for snake 
                        printf("Player one has biten by snake  ..\n");
                        position=22;
                        printbox(box,position,positionx);

                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                            else    {
                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{
                            
                            firstwin=true;
                            goto win;
                        }

                    }else if(position==20){     // for ladder
                        printf("Player one got the ladder ..\n");
                        position=40;
                        printbox(box,position,positionx);

                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);

                            }else{
                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{

                            
                            firstwin=true;
                            goto win;
                        }


                    }else if(position==9){           // for ladder
                        printf("Player one got the ladder ..\n");
                        position=75;
                        printbox(box,position,positionx);

                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100){
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);

                            }else{
                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{

                            
                            firstwin=true;
                            goto win;

                        }

                    }else if(position==80){              // for ladder
                        printf("Player one got the ladder ..\n");
                        position=96;
                        printbox(box,position,positionx);

                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100){
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                                
                            }else{

                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);

                            }

                        }else{

                            
                            firstwin=true;
                            goto win;
                            
                        }

                    }else{
                        if(position!=100){           // for no ladder no snake
                        printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((position+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                                
                            }else{

                                position = position +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{

                            
                            firstwin=true;
                            goto win;

                    }
                    }
                        

                    break;

                case 0:

                    printf("Bas har man liye... \n\n");
                    firstwin=false;
                    secondwin=true;
                    win=true;
                    goto win;
                    break;

                default:

                    printf("Please enter 1 or 0 ");
                    goto first_reroll;

            }
            printbox(box,position,positionx);
            if (position==100){
                    firstwin=true;
                    goto win;
            }

            second_reroll:
            printf("second player's turn (\"press 1 for roll the dice\"): ");
            scanf("%d",&digit);
            dice=roll_dice();

            switch(digit){


                case 1: 
                    if (positionx==99){      // for snake 
                        printf("Player second has biten by snake  ..\n");
                        positionx=60;
                        printbox(box,position,positionx);

                        if(positionx!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                                }

                            else{
                                positionx = positionx +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{
                            goto win;
                        }

                    }else if(positionx==94){     // for snake 
                        printf("Player second has biten by snake  ..\n");
                        positionx=80;
                        printbox(box,position,positionx);
                        if(positionx!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }
                            else    {
                                positionx = positionx +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{
                            goto win;
                        }

                    }else if(positionx==70){         // for snake 
                        printf("Player second has biten by snake  ..\n");
                        positionx=22;
                        printbox(box,position,positionx);

                        if(position!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                            else    {
                                positionx = positionx +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{
                            goto win;
                        }

                    }else if(positionx==20){     // for ladder
                        printf("Player second had got the ladder ..\n");
                        positionx=40;
                        printbox(box,position,positionx);

                        if(positionx!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);

                            }else{
                                positionx = positionx +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{

                            goto win;
                        }


                    }else if(positionx==9){           // for ladder
                        printf("Player second had got the ladder ..\n");
                        positionx=75;
                        printbox(box,positionx,positionx);

                        if(positionx!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100){
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);

                            }else{
                                positionx = positionx+dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{

                            goto win;

                        }

                    }else if(positionx==80){              // for ladder
                        printf("Player second had got the ladder ..\n");
                        positionx=96;
                        printbox(box,position,positionx);

                        if(positionx!=100){
                            printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100){
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                                
                            }else{

                                positionx = positionx +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);

                            }

                        }else{

                            goto win;
                            
                        }

                    }else{
                        if(positionx!=100){           // for no ladder no snake
                        printf("\nthe dice result is : \033[0;31m%d\033[0m\n",dice);

                            if((positionx+dice)>100)  {
                                printf("Sorry this is not possible .\n");
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                                
                            }else{

                                positionx = positionx +dice ;
                                printf("The first player position is %d\n",position);
                                printf("The second player position is %d\n",positionx);
                            }

                        }else{

                            goto win;

                    }
                    }
                        

                    break;

                case 0:

                    printf("Bas har man liye .. \n\n");
                    
                    firstwin=true;
                    game = true;
                    win=true;
                    goto win;

                default:

                    printf("Please enter 1 or 0 ");
                    goto second_reroll;
                    break;
            
            }
            if (positionx==100){
                    secondwin=true;
                    goto win;
            }
            
            if(game==true){
                printbox(box,position,positionx);
                if (position==100) {
                    win =true;
                    goto win;
                    }
            }
        } 
    }else{
        printf("invalid choice..");
    }
    
    win:
            if (firstwin==true && secondwin==true){
                    printf("Cangarusession\n Its tie..");
                }
                if (secondwin==true){
                    printf("Cangarusession\nPlayer Second have won the game..\n");
                }
            
                if (firstwin==true){
                    printf("Cangarusession\nPlayer first have won the game..\n");
            }
        

        
    printf("Greeting's By M33T PIPROTAR..... ");        
    return 0;

}