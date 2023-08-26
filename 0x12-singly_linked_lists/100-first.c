#include <stdio.h>

/**
 * bmain - function executed before main
 *  This function is automatically executed before the main function starts,
 *   printing a poetic message.
 * Return: no return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}





