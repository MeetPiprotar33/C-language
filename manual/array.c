#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i;

    printf("Enter a string: ");
    gets(string);

    for (i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }

    printf("Uppercase string: %s", string);

    return 0;
}
