#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to the binary string.
 *
 * Return: The converted unsigned int, or 0 if invalid characters or NULL input.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int str_len, binary_multiplier;

    if (!b)
        return (0);

    str_len = 0;
    while (b[str_len] != '\0')
        str_len++;

    for (str_len--, binary_multiplier = 1; str_len >= 0; str_len--, binary_multiplier *= 2)
    {
        if (b[str_len] != '0' && b[str_len] != '1')
        {
            return (0);
        }

        if (b[str_len] & 1)
        {
            result += binary_multiplier;
        }
    }

    return result;

