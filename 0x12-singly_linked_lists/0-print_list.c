#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * function that prints all the elements of a list_t list
 * @h: list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		return (1);
	}
	else
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		return (print_list(h->next) + 1);
	}
}
