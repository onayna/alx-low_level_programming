#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copy the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or exit with error codes.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_status, write_status;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    // Open the source file for reading
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    // Open the destination file for writing, or create if it doesn't exist
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    // Copy the content from source to destination
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_status = write(fd_to, buffer, bytes_read);
        if (write_status == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    // Close the file descriptors
    if (close(fd_from) == -1 || close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd\n");
        exit(100);
    }

    return (0);
}
