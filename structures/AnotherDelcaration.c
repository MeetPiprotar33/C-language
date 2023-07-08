//diffrent declaration of structure
//M33T
#include<stdio.h>

int main(){

    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
    } pikachu, abc;
    

    pikachu.attack=60;
    pikachu.hp=100;
    pikachu.speed=100;
    pikachu.tier='A';


    abc.attack=70;
    abc.hp=90;
    abc.speed=10080;
    abc.tier='B';
    
    printf("The speed of the pikachu is %d",pikachu.speed);
    printf("\nThe hp of the pikachu is %d",pikachu.hp);
    printf("\nThe attack of the pikachu is %d",pikachu.attack);
    printf("\nThe tier of the pikachu is %c",pikachu.tier);

    


}   