#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen(__FILE__, "r");   // open the source file for reading
    for (int i=0;i<3;i++){

    if (fp) {
        while ((c = fgetc(fp)) != EOF) {   // read each character from the file
            putchar(c);                    // print the character to the console
        }
        fclose(fp);                        // close the file
    }
    }
    return 0;
}
