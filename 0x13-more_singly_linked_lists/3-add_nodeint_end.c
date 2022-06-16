#include "lists.h"
/**
 * add_nodeint_end - function adds a node at the end of the list
 * @head: pointer to the first node on the list
 * @n: integer input to be added
 * Return: address of the last added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Nnode;
	listint_t *lstNode = *head;

	Nnode = malloc(sizeof(listint_t));
	if (Nnode == NULL)
		return (NULL);

	Nnode->n = n;
	Nnode->next = NULL;

	if (*head == NULL)
	{
		*head = Nnode;
		return (Nnode);
	}

	while (lstNode->next != NULL)
		lstNode = lstNode->next;

	lstNode->next = Nnode;

	return (Nnode);
}
