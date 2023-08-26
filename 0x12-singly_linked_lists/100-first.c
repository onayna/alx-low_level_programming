#include <stdio.h>

/* my_constructor - Prints phrases before the main function is executed.
 * Return: Always 0 (Success).
 * */
 #include <stdio.h>

void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}





