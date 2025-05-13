#ifndef FILES_H
#define FILES_H
/**
 * Attempts to load a file
 *
 * Example:
 *  file_load("./hello.txt")
 */
char* file_load(char* file_location);
/**
 * Tries to append the provided data to the end of a file, creates the file if it doesn't exist
 *
 * Example:
 *  file_append("hello world", sizeof(char) * 11, "./hello.txt")
 */
int file_append(char* data, int size, char* file_location);

#endif 
