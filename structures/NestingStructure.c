// Nesting of the Structures
//M33T
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];

    } pokemon ;

    typedef struct LegandaryPokemon{
        pokemon basic;
        char ability[15];
    } LegandaryPokemon ;

    typedef struct GodPokemon
    {
        LegandaryPokemon legend;
        int specialattack;
    }GodPokemon;

    GodPokemon arceus;
    LegandaryPokemon mewtwo;
    pokemon pikachu;

    arceus.specialattack=500;
    strcpy(arceus.legend.ability,"Turn into stone");
    arceus.legend.basic.attack=200;
    arceus.legend.basic.hp=400;
    arceus.legend.basic.speed=230;
    arceus.legend.basic.tier='G';
    strcpy(arceus.legend.basic.name,"arceus");


    strcpy(mewtwo.ability,"Pressure");
    mewtwo.basic.attack=150;
    mewtwo.basic.hp=100;
    mewtwo.basic.speed=80;
    mewtwo.basic.tier='S';
    strcpy(mewtwo.basic.name,"MEWTWO");

    
    pikachu.attack=200;
    pikachu.hp=150;
    pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");


    printf("\nGod pokemon =>\n");
    printf("\nLegandary pokemon =>\n");
    printf("The pokemon %s's ability is %s\n",arceus.legend.basic.name,arceus.legend.ability);
    printf("The pokemon %s's speed is %d\n",arceus.legend.basic.name,arceus.legend.basic.speed);
    printf("The pokemon %s's hp is %d\n",arceus.legend.basic.name,arceus.legend.basic.hp);
    printf("The pokemon %s's attack is %d\n",arceus.legend.basic.name,arceus.legend.basic.attack);
    printf("The pokemon %s's tier is %c\n",arceus.legend.basic.name,arceus.legend.basic.tier);
    printf("The pokemon %s's Special attack is %d\n",arceus.legend.basic.name,arceus.specialattack);


    printf("\nLegandary pokemon =>\n");
    printf("The pokemon %s's ability is %s\n",mewtwo.basic.name,mewtwo.ability);
    printf("The pokemon %s's speed is %d\n",mewtwo.basic.name,mewtwo.basic.speed);
    printf("The pokemon %s's hp is %d\n",mewtwo.basic.name,mewtwo.basic.hp);
    printf("The pokemon %s's attack is %d\n",mewtwo.basic.name,mewtwo.basic.attack);
    printf("The pokemon %s's tier is %c\n",mewtwo.basic.name,mewtwo.basic.tier);


    printf("\nnoramal pokemon =>\n");
    printf("The pokemon %s's speed is %d\n",pikachu.name,pikachu.speed);
    printf("The pokemon %s's hp is %d\n",pikachu.name,pikachu.hp);
    printf("The pokemon %s's attack is %d\n",pikachu.name,pikachu.attack);
    printf("The pokemon %s's tier is %c\n",pikachu.name,pikachu.tier);

    return 0;
}