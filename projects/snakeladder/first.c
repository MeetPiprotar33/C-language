//first build
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
        if(x==box[i][j]) printf("|%d|\t",box[i][j]);
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
    printbox(box,position);

    while(game==true){
        int digit;

        printf("\nSnakes are from :-\t\'99\' to \'60\'\t\'94\' to \'80\'\t\'70\' to \'22\'");
        printf("\nLadderes are from :-\t\'20\' to \'40\'\t\'9\' to \'70\'\t\'80\' to \'96\'");
        printf("\nEnter 1 to Roll Dice OR 0 to Exit the game: ");
        scanf("%d",&digit);
        int dice=roll_dice();

        switch(digit){

            case 1:
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
                    

                break;
            case 0:
                game = false;
        }
        printbox(box,position);
        if (position==100) goto won;

    } 
    won:
        printf("Cangarusession\n You have won the game..");

    
    return 0;

}