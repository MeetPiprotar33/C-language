//Write a function program to check whether a string is palindrome or not.
//M33T

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {

    for(int i=0, j=strlen(str) - 1 ; i<j ; i++,j-- ){
        if (str[i] != str[j]) {
            return 0;
        }

    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
