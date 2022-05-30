#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * function that prints all the elements of a listint_t list.
 * @h
 * return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
	{
		printf("[%d]%s\n", h->len, h->str);
		return (1);
	}
	else 
	{
		return (print_listint(h->next) + 1);
	}
}
