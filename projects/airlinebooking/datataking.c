#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writeCSV() {
    FILE *file = fopen("data.csv", "w");  // Open the file for writing

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    // Write the header row
    fprintf(file, "Name, Age, City\n");

    // Write data rows
    fprintf(file, "AHMEDABAD   JAMNAGAR   10000101\n");
    fprintf(file, "AHMEDABD   VADORDARA   10000102\n");
    fprintf(file, "VADODARA   JAMNAGAR   10000103\n");
    fprintf(file, "VADODARA   SURAT   10000104\n");
    fprintf(file, "SURAT   JAMNAGAR   10000105\n");
    fprintf(file, "SURAT   AHMEDABAD   10000106\n");
    fprintf(file, "VADODARA   JAMNAGAR   10000107\n");
    fprintf(file, "VADODARA   JAMNAGAR   10000108\n");
 

    fclose(file);  // Close the file
}

void readCSV() {
    FILE *file = fopen("data.csv", "r");  // Open the file for reading

    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    char line[100];
    fgets(line, sizeof(line), file);  // Read the header row and discard it

    while (fgets(line, sizeof(line), file)) {
        char *name, *age, *city;

        // Parse the line using strtok function
        name = strtok(line, ",");
        age = strtok(NULL, ",");
        city = strtok(NULL, "\n");
 
        if (strcmp(line,"AHMEDABAD")==0){
        printf("Name: %s\n", name);
        printf("Age: %s\n", age);
        printf("City: %s\n", city);}
    }

    fclose(file);  // Close the file
}

int main() {
    writeCSV();
    readCSV();

    return 0;
}
