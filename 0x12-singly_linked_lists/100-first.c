#include <stdio.h>

/**
 * bmain - Function executed before main.
 *
 * Summary:
 *   This function is automatically executed before the main function starts,
 *   printing a poetic message.
 */
void __attribute__((constructor)) bmain()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bear my dwelling upon my back!\n");
}





