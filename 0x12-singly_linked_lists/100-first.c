#include <stdio.h>

/* my_constructor - Prints phrases before the main function is executed.
 * Return: Always 0 (Success).
 * */
 #include <stdio.h>

void __attribute__((constructor)) my_constructor()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}





