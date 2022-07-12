#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: first element
 * Return: frees a dlistint list
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
