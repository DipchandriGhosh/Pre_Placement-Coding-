#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    const char *sourceFilename = argv[1];
    const char *destinationFilename = argv[2];

    FILE *sourceFile = fopen(sourceFilename, "rb");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *destinationFile = fopen(destinationFilename, "wb");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Read from source and write to destination
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully from %s to %s\n", sourceFilename, destinationFilename);

    return 0;
}
