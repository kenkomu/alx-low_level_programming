#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list to browse
 *
 * Return: size of the list
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
