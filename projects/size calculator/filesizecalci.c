#include <stdio.h>

int main() {
    FILE *file;
    long size;
    int characters=0;
    int words=0;
    int lines;
    char strname[15];
    char line[1000];

    printf("Enter the file name :");
    scanf("%s",&strname);
    file = fopen(strname, "rb");

    if (file == NULL) {
        printf("THE ENTERED FILE IS NOT AVAILABLE IN THE FOLDER.\n");
        return 1;
    }
    fseek(file, 0, SEEK_END);
    size = ftell(file);

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s",line);
    }

    fclose(file);

    printf("The size of the file is %ld bytes.\n", size);

    return 0;
}
