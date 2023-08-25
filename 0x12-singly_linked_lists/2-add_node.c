#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    if (str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        perror("strdup");
        free(new_node);
        exit(EXIT_FAILURE);
    }

    new_node->len = 0;
    while (new_node->str[new_node->len] != '\0')
        new_node->len++;

    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
