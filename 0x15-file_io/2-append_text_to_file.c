#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len, write_status;


    if (filename == NULL)
    {
	    printf(STDERR_FILENO, "Error: NULL filename\n");
        return (-1);
    }
   
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
    {
	    printf(STDERR_FILENO, "Error: Could not open file %s\n", filename);
        return (-1);
    }
    if (text_content != NULL)
    {
        
        for (len = 0; text_content[len] != '\0'; len++)
            ;

      
        write_status = write(fd, text_content, len);
        if (write_status == -1)
        {
		printf(STDERR_FILENO, "Error: Write failed\n");
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
