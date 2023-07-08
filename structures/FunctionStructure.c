// Nesting of the Structures
//M33T
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];

    } pokemon ;

void print(pokemon p){
    printf("The pokemon %s's speed is %d\n",p.name,p.speed);
    printf("The pokemon %s's hp is %d\n",p.name,p.hp);
    printf("The pokemon %s's attack is %d\n",p.name,p.attack);
    printf("The pokemon %s's tier is %c\n",p.name,p.tier);
    return ;
}

int main(){

    

    pokemon pikachu;
    
    pikachu.attack=200;
    pikachu.hp=150;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    printf("\nnoramal pokemon PRINT=>\n");
    printf("The pokemon %s's speed is %d\n",pikachu.name,pikachu.speed);
    printf("The pokemon %s's hp is %d\n",pikachu.name,pikachu.hp);
    printf("The pokemon %s's attack is %d\n",pikachu.name,pikachu.attack);
    printf("The pokemon %s's tier is %c\n\n",pikachu.name,pikachu.tier);

    printf("Print by Function=>\n");
    print(pikachu);

    return 0;
}