#include "main.h"
#include <stdlib.h>
/**
 - malloc_checked - our allocates memory.
 - size b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails (null) ,  status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
