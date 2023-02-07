#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * 
 * @param h 
 * @return size_t 
 */
size_t print_list(const list_t *h);
new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
new->str = strdup("Hello");
new->len = 5;
new->next = head;
head = new;
