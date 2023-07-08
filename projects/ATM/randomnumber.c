#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber() {
    srand(time(NULL));

    // Generate the random 8-digit number
    int randomNumber = rand() * 900000 + 100000;

    return randomNumber;
}

int main() {
    int randomNum = generateRandomNumber();
    printf("Random 8-digit number: %d\n", randomNum);

    return 0;
}
