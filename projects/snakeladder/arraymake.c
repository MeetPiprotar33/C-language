// random number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
    srand(time(NULL));  // seed the random number generator
    return (rand() % 6) + 1;
}
int main(){
    printf("%d",roll_dice());

}
