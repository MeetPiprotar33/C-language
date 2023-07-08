// create array of structures

//WITH USE OF TYPEDEF
//M33T


#include<stdio.h>
#include<string.h>

int main(){
    
    typedef struct pokemon
    {
        char name[15];
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;

    pokemon arr[4];

    strcpy(arr[0].name,"pikachu");
    arr[0].hp=100;
    arr[0].attack=120;
    arr[0].speed=80;
    arr[0].tier='A';

    strcpy(arr[1].name,"charizard");
    arr[1].hp=120;
    arr[1].attack=130;
    arr[1].speed=50;
    arr[1].tier='B';

    strcpy(arr[2].name,"snorlax");
    arr[2].hp=200;
    arr[2].attack=150;
    arr[2].speed=70;
    arr[2].tier='S';


    for (int i=0;i<3;i++){
        
        printf("The speed of pokemon (%s) is %d\n",arr[i].name,arr[i].speed);
        printf("The hp of pokemon (%s) is %d\n",arr[i].name,arr[i].hp);
        printf("The attack of pokemon (%s) is %d\n",arr[i].name,arr[i].attack);
        printf("The tier of pokemon (%s) is \'%c\'\n",arr[i].name,arr[i].tier);
        printf("Pokemon change.\n");
    }

   return 0;
}