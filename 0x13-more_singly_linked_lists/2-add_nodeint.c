#include "lists.h"
/**
 * add_nodeint - function add a new node
 * @head: pointer to first node in the list
 * @n: integer input to be added
 * Return: pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Nnode;

	Nnode = malloc(sizeof(listint_t));
	if (Nnode == NULL)
		return (NULL);

	Nnode->n = n;
	Nnode->next = *head;
	*head = Nnode;

	return (Nnode);
}
