//basic by input output
//M33T

#include<stdio.h>


int main(){

    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    
    struct pokemon pikachu;

    pikachu.attack=60;
    pikachu.hp=100;
    pikachu.speed=100;
    pikachu.tier='A';

    struct pokemon abc;
    printf("Enter the tier of abc pokemon :  ");
    scanf("%c",&abc.tier);
    printf("Enter the speed of abc pokemon : ");
    scanf("%d",&abc.speed);
    printf("Enter the attack of abc pokemon : ");
    scanf("%d",&abc.attack);
    printf("Enter the hp of abc pokemon : ");
    scanf("%d",&abc.hp);
    
    
    printf("The speed of the pikachu is %d",pikachu.speed);
    printf("\nThe hp of the pikachu is %d",pikachu.hp);
    printf("\nThe attack of the pikachu is %d",pikachu.attack);
    printf("\nThe tier of the pikachu is %c",pikachu.tier);
    printf("\n\n");
    printf("The speed of the pokemon abc is %d",abc.speed);
    printf("\nThe hp of the pokemon abc is %d",abc.hp);
    printf("\nThe attack of the pokemon abc is %d",abc.attack);
    printf("\nThe tier of the pokemon abc is %c",abc.tier);

    


}   