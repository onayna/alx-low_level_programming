#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: The number of characters printed (1).
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

