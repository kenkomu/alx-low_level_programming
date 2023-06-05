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
	dlistint_t *traverser = h;

	if (h == NULL)
		return (0);

	while (traverser != NULL)
	{
		printf("%d\n", traverser->n);
		traverser = traverser->next;
		size++;
	}
	return (size);
}
