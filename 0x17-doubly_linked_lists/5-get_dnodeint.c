#include "lists.h"

/**
 * get_dnodeint_at_index - the nth node of a dlistint list
 * @head: first element
 * @index: element's number
 * Return: a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cLoop = 0;

	while (head != NULL)
	{
		if (index == cLoop)
			return (head);
		head = head->next;
		cLoop++;
	}

	return (NULL);
}
