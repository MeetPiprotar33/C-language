#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;
    float salary;
    
    // Open the file in write mode
    file = fopen("details.txt", "w");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }
    
    // Prompt the user for details
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter salary: ");
    scanf("%f", &salary);
    
    // Write the details to the file
    fprintf(file, "Name: %s", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Salary: %.2f\n", salary);
    
    // Close the file
    fclose(file);
    
    printf("Details saved successfully.\n");
    
    return 0;
}
