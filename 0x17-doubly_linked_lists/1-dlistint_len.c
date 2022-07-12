#include "lists.h"
/**
 * dlistint_len - return the number of elements in a linked list
 * @h: list to browse
 * return: the size of list
 */
size_t dlistint_len(const dlistint_t *h);
{
	if (h == NULL)
		return (0);
	else
		return (dlistint_len(h->next) + 1);
}
