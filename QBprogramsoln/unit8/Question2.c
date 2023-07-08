//Write a C program to which copies the contents of one file to other.
//M33T
#include <stdio.h>

#define BUFFER_SIZE 4096

int main() {
    FILE *sourceFile, *destinationFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;
    
    // Open the source file for reading
    sourceFile = fopen("source.txt", "rb");
    if (!sourceFile) {
        printf("Error opening source file.\n");
        return 1;
    }
    
    // Open the destination file for writing
    destinationFile = fopen("destination.txt", "wb");
    if (!destinationFile) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    
    // Copy contents from source file to destination file
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }
    
    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);
    
    printf("File copied successfully.\n");
    
    return 0;
}
