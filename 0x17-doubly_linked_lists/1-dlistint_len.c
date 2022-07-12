#include "lists.h"
/**
 * dlistint_len - number of elements in a dlistint_t linked list
 * @h: list to browse
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (dlistint_len(h->next) + 1);
}
