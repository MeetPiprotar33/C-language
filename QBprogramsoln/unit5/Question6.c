//Write a function which accepts string and returns length of string.
//M33T


#include <stdio.h>

int strlength(char str[]) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The length of the string is %d\n", strlength(str));
    return 0;
}
