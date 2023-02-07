#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: list to browse
 *
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (h->next == NULL)
	{
		printf("[%d]" h->len);
		return (1);
	}
	else
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d]", h->len);
		return (list_len(h->next) + 1);
	}
}
