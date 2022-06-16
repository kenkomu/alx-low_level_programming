#include "lists.h"
/**
 * get_nodeint_at_index - function returns the nth node of the linked list
 * @head: pointer to the first node
 * @index: the nth node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;

	while (head != NULL)
	{
		head = head->next;
		if (index == nth)
			return (head);

		nth += 1;
	}
	return (NULL);
}
