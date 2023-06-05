#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list
 * @head: first element
 * @index: element number
 * Return: error code
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *before, *current;
	unsigned int i = 0;

	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		current->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index)
	{
		before = current;
		if (current->next == NULL)
			return (-1);

		current = current->next;
		i++;
	}
	before->next = current->next;

	if (current->next != NULL)
		current->next->prev = before;
	free(current);

	return (1);
}
