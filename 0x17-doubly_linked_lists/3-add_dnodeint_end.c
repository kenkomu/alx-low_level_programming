#include"lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: first element
 * @n: number
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}


	dlistint_t *temp = *head;

	newNode->n = n;

	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
return (newNode);
}
