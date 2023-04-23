#include "lists.h"
/**
 * reverse_listint - functiion reverses a linked list
 * @head: pointer to the first node
 * Return: returns a pointer toi the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *Nnod = NULL;
	listint_t *Pnod = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head) != NULL)
	{
		Nnod = (*head)->next;
		(*head)->next = Pnod;
		Pnod = (*head);
		(*head) = Nnod;
	}
	Pnod = (*head);
	return (Pnod);
}
