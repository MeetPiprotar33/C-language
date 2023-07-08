#include <stdio.h>

int main() {
    int number = 42;

    // Print the number in different colors
    printf("\033[0;31m%d\033[0m\n", number); // red
    printf("\033[0;32m%d\033[0m\n", number); // green
    printf("\033[0;33m%d\033[0m\n", number); // yellow
    printf("\033[0;34m%d\033[0m\n", number); // blue
    printf("\033[0;35m%d\033[0m\n", number); // magenta
    printf("\033[0;36m%d\033[0m\n", number); // cyan
    printf("\033[0;30m%d\033[0m\n", number); // black

    return 0;
}
