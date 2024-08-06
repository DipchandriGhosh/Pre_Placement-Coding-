#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening file");
        return -1;
    }

    char buffer1[BUFFER_SIZE];
    char buffer2[BUFFER_SIZE];
    size_t bytesRead1, bytesRead2;

    // Read and compare file contents
    while ((bytesRead1 = fread(buffer1, 1, BUFFER_SIZE, f1)) > 0 &&
        (bytesRead2 = fread(buffer2, 1, BUFFER_SIZE, f2)) > 0) {
        if (bytesRead1 != bytesRead2 || memcmp(buffer1, buffer2, bytesRead1) != 0) {
            fclose(f1);
            fclose(f2);
            return 0; // Files are different
        }
    }

    // Check if any file has extra content
    if ((bytesRead1 != 0 && bytesRead2 == 0) || (bytesRead1 == 0 && bytesRead2 != 0)) {
        fclose(f1);
        fclose(f2);
        return 0; // Files are different
    }

    fclose(f1);
    fclose(f2);
    return 1; // Files are identical
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    int result = compareFiles(argv[1], argv[2]);
    if (result == -1) {
        // Error occurred during file operations
        return 1;
    }
    return result;
}
