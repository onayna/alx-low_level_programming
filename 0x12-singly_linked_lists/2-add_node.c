
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

    list_t *new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    new->str = strdup(str);
    if (new->str == NULL)
    {
        perror("String duplication failed");
        free(new);
        exit(EXIT_FAILURE);
    }

    new->len = 0;
    while (new->str[new->len] != '\0')
        new->len++;

    new->next = *head;
    *head = new;

    return (new);
}
