#include <stdio.h>
#include <stdlib.h>
#include "files.h"
char* file_load(char* file_location) {
    char* buffer;
    FILE* file = fopen(file_location, "r");
    if (file == NULL) {
        fprintf(stderr, "Error!\n");
    }
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    buffer = malloc(size);
    fseek(file, 0, SEEK_SET);
    fread(buffer, size, 1, file);
    fclose(file);
    return buffer;
};

int file_append(char* data, int size, char* file_location) {
    FILE* file = fopen(file_location, "a");
    if (file == NULL) {
        fprintf(stderr, "Error!\n");
    }
    int bytes_written = fwrite(data, 1, size, file);
    fclose(file);
    return bytes_written;
}
