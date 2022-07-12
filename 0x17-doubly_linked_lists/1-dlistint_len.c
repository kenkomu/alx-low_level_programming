#include "lists.h"
/**
 * dlistint_len - the number of elements in a linked dlistint_t list
 * @h list to browse
 * return: size of the list
 */
size_t dlistint_len(const dlistint_t *h);
{
	if (h == NULL)
		return (0);
	else
		return (dlistint_len(h->next) + 1);
}
