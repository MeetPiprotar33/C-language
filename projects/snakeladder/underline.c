#include <stdio.h>

int main() {
    int number = 42;

    // Highlight the number
    printf("\033[4m\033[1m%d\033[0m\n", number); // bold

    // Underline the number
    printf("\033[4m%d\033[0m\n", number); // underline

    return 0;
}
