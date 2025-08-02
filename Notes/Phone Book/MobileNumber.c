#include <stdio.h>
#include <stdlib.h>

void saveContact(const char* name, const char* mobileNumber) {
    FILE *outFile = fopen("contacts.txt", "a"); // Open file in append mode
    if (outFile != NULL) {
        fprintf(outFile, "%s: %s\n", name, mobileNumber); // Write the name and mobile number to the file
        fclose(outFile); // Close the file
        printf("Contact saved successfully!\n");
    } else {
        perror("Error opening file");
    }
}

void displayContacts() {
    FILE *inFile = fopen("contacts.txt", "r"); // Open file in read mode
    if (inFile != NULL) {
        char line[100]; // Buffer to hold each line
        printf("\nSaved Contacts:\n");
        while (fgets(line, sizeof(line), inFile) != NULL) {
            printf("%s", line); // Print each line from the file
        }
        fclose(inFile); // Close the file
    } else {
        perror("Error opening file");
    }
}

int main() {
    char name[50]; // Array to hold the name
    char mobileNumber[15]; // Array to hold the mobile number

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // Get the name from user input

    printf("Enter mobile number: ");
    fgets(mobileNumber, sizeof(mobileNumber), stdin); // Get the mobile number from user input

    // Save the name and mobile number
    saveContact(name, mobileNumber);

    // Display the saved contacts
    displayContacts();

    return 0;
}
