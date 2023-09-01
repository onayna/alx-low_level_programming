#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
    if (index >= (sizeof(unsigned long int) * 8)) {
        return (-1); 
    }

   mask = 1UL << index;
    
    *n |= mask; 
    
    return (1);
}
