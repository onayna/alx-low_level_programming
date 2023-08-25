#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h) {
    size_t count = 0;  // Initialize a counter for the number of nodes

    while (h != NULL) {
        // Check if the string in the node is NULL
        if (h->str == NULL) {
            printf("[0] (nil)\n");
        } else {
            printf("[%d] %s\n", h->len, h->str);
        }

        count++;  // Increment the node count
        h = h->next;  // Move to the next node
    }

    return count;
}
