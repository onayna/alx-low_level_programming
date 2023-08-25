#include <stddef.h>
#include "lists.h" 

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: the final value of count, which is the number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0; /*count variable is initialized to keep track of the number of nodes*/
    const list_t *current = h;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}
