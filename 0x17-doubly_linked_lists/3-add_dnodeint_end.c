#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 *
 * @head: first element
 * @n: number
 * return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = NULL;
	tmp = *head;

	new = malloc(sizeof(dlistint_t));
	
	if (new == NULL)
		return (NULL)
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head->prev = NULL;
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp->next = tmp;
		}
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
