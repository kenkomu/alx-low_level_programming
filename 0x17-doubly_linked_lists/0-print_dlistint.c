#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: list to browse
 *
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
