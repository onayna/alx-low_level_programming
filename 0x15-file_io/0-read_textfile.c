#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters (characters) to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened, read, or if other errors occur.
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;            
    ssize_t bytes_read, bytes_written;
    char *buffer;

   
    if (!filename)
        return (0);

   
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    
    buffer = malloc(sizeof(char) * letters);
    if (!buffer) {
        close(fd);
        return (0);
    }

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        close(fd);
        free(buffer);
        return (0);
    }

 
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read) {
        close(fd);
        free(buffer);
        return (0);
    }

   
    close(fd);
    free(buffer);
    return (bytes_read);
}
