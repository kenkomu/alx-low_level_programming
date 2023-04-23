#include "lists.h"

/**
 * print_listint - function printd all the elemnts of a listint list
 * @h: pointer to the list
 * Return: returns the number of nodes in the listint list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *curNode = h;
	int count = 0;

	while (curNode != NULL)
	{
		printf("%d\n", curNode->n);
		count += 1;
		curNode = curNode->next;
	}

	return (count);
}
