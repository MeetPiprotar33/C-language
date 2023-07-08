//Write a program to print a program itself.
//M33T

#include <stdio.h>

int main() {
    FILE *file = fopen(__FILE__, "r");
    if (file) {
        char c;
        while ((c = fgetc(file)) != EOF) {
            putchar(c);
        }
        fclose(file);
    }
    
    return 0;
}
