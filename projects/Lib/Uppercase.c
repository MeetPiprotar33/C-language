#include <stdio.h>
#include <ctype.h>

void convertToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    //fgets(str, sizeof(str), stdin);
    gets(str);
    
    convertToUpper(str);
    
    printf("Uppercase string: %s", str);
    
    return 0;
}
