#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: The head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t node_count = 0;

    while (h != NULL)
    {
        node_count++;
        h = h->next;
    }

    return (node_count);
}
