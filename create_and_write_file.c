#include<stdio.h>
#include <stdio.h>

int main() {
    FILE *fp;
    char text[] = "Hello, this is a sample text written to the file.";

    // Create and open a file in write mode
    fp = fopen("output.txt", "w");

    // Check if file creation was successful
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    // Write text to the file
    fprintf(fp, "%s\n", text);

    // Close the file
    fclose(fp);

    printf("File created and text written successfully.\n");

    return 0;
}