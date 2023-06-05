#include"lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 * @head:  pointer to the last element
 * @n: number
 *
 * Return: the new last element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;

	if (*head != NULL)
	{
		(*head)->next = new_node;
	}
}
