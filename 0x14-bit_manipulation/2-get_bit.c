#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8)) {
        return (-1);  // Index out of bounds
    }

    unsigned long int mask = 1UL << index;
    return ((n & mask) ? 1 : 0);
}
