#include "lists.h"
/**
 * sum_dlistint - sum of all the data of a dlistint list
 * @head: first element
 * Return: sum of tehe linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
