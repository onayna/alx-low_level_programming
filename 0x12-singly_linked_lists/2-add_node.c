#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Addition of a  new node at the beginning of a list_t list.
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

    new_node->len = 0;
    while (str[new_node->len] != '\0')
        new_node->len++;

    new_node->str = malloc((new_node->len + 1) * sizeof(char));
    if (new_node->str == NULL)
    {
        perror("malloc");
        free(new_node);
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i <= new_node->len; i++)
        new_node->str[i] = str[i];

    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
