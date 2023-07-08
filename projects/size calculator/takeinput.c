#include <stdio.h>

int main() {
    FILE *file;
    char input[1000000];
    int arr[10];

    // Open the file in write mode
    file = fopen("filename.txt", "a");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Enter input: ");

    // Read input from the user
    fgets(input, sizeof(input), stdin);
    for (int i=0;i<10;i++){
        printf("Enter %d element : ",i);
        fgets(input, sizeof(arr[i]), stdin);
    }

    // Write the input to the file
    fprintf(file, "%s", input);
    fprintf(file,"%d",arr);

    fclose(file);

    printf("Input saved to the file.\n");

    FILE *file1;
    long size;

    // Open the file in binary mode
    file1 = fopen("filename.txt", "rb");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Move the file pointer to the end of the file
    fseek(file1, 0, SEEK_END);

    // Get the position of the file pointer, which is equal to the file size
    size = ftell(file1);

    fclose(file1);

    printf("The size of the file is %ld bytes.\n", size);

    return 0;
}


