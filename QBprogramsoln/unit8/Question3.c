//Write a program to illustrate the use of fputc() and fputs()
//M33T
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("meet.txt", "w");
    if (!file) {
        printf("Error opening the file.\n");
        return 1;
    }
    fputc('C', file);
    fputs("omputer engineering", file);
    fclose(file);
    printf("File has been wri  tten\n");

    return 0;
}
