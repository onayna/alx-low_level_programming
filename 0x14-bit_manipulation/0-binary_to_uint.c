#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if there are invalid characters or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return (0);

    unsigned int result = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0' || b[i] == '1')
            result = (result << 1) + (b[i] - '0');
        else
            return (0);
    }
