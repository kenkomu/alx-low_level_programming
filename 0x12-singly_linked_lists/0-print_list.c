#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        if (current->str == NULL)
            printf("[%lu] (nil)\n", current->len);
        else
            printf("[%lu] %s\n", current->len, current->str);

        current = current->next;
        count++;
    }

    return count;
}


