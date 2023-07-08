#include <stdio.h>
//#include<string.h>
#include<stdbool.h>

//WAP TO FIND THE ELEMENT 
//M33T


int main() {
    char str[100], ch;
    int i, index = -1;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search for: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Character not found in string.\n");
    } else {
        printf("Character found at index %d.\n", index);
    }

    return 0;
}
