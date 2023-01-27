// C program to load all the executable binary of an exe file into memory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *file = fopen("C:/Program Files/Cheat Engine 7.4/cheatengine-i386.exe", "rb");

    // Check if the file opened successfully
    if (file == NULL)
    {
        fprintf(stderr, "Error: Failed to open \"cheatengine-i386.exe\"\n");
        exit(1);
    }

    // Getting the size of the file
    fseek(file, 0L, SEEK_END);
    long int size = ftell(file);
    if (size == -1)
    {
        exit(1);
    }

    // Reset the file position indicator to the beginning of the file
    fseek(file, 0L, SEEK_SET);

    // Allocate sufficient memory for the file
    char *buffer = (char *)malloc(size);
    if (buffer == NULL)
    {
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        printf("Code Running:");
    }

    // Copy all the text into the buffer
    fread(buffer, sizeof(char), size, file);

    // Close the file
    fclose(file);

    // Free the buffer
    free(buffer);

    return 0;
}