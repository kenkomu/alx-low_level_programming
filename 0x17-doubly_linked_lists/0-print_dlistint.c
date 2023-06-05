
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
	dlistint_t *traverser = h;
	size_t count = 0;

	while (traverser != NULL)
	{
		printf("%d\n", traverser->n);
		traverser = traverser->next;
		count++;
	}
	return (count);
}
