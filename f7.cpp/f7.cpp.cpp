/*
* FILE :focus 7.cpp
* PROJECT : SENG1000 
* PROGRAMMER : ignatius praise chinonso
* DATE:       20-03-2024
* DESCRIPTION :
* The functions in this file are used to write this program in C onlyWrite a program to give you practice at creating text and binary files 
*/
#include <stdio.h>
#include <stdlib.h>

// Function to check for errors in file I/O operations
void checkError(FILE* file, const char* message) {
    if (file == NULL) {
        perror(message);
        exit(EXIT_FAILURE);
    }
}

// Function to write text file
void writeTextFile() {
    FILE* file = fopen("myTextFile.txt", "w");
    checkError(file, "Error opening text file for writing");

    fprintf(file, "This is line 1.\n");
    fprintf(file, "This is line 2.\n");

    fclose(file);
}



int main() {
    writeTextFile();
    writeBinaryFile();

    return 0;
}