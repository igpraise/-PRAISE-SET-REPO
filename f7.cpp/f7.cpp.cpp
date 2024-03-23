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

// 

// Function to write binary file
void writeBinaryFile() {
    FILE* file = fopen("myEvenDataList.data", "wb");
    checkError(file, "Error opening binary file for writing");

    const unsigned short kBinaryData[] = { 26946, 24942, 31090,
                                            25632, 29793, 8289, 28518, 8306, 28537, 33141, 39308 };
    size_t numElements = sizeof(kBinaryData) / sizeof(kBinaryData[0]);

    for (size_t i = 0; i < numElements; i++) {
        if (kBinaryData[i] % 2 == 0) {
            fwrite(&kBinaryData[i], sizeof(kBinaryData[i]), 1, file);
        }
    }

    fclose(file);
}

int main() {
    writeTextFile();
    writeBinaryFile();

    return 0;
}