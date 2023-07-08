#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* generate_random_string() {
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int length = 8;
    char* random_string = (char*)malloc((length + 1) * sizeof(char));  // +1 for the null terminator

    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(characters) - 1);
        random_string[i] = characters[index];
    }

    random_string[length] = '\0';  // Add null terminator

    return random_string;
}

int main() {
    char* random_string = generate_random_string();
    printf("%s\n", random_string);

    free(random_string);
    return 0;
}
