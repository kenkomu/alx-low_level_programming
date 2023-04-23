#include "lists.h"
/**
 * pop_listint - function deletes the head node
 * @head: pointer to the first node in the list
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	int nd;
	listint_t *Hed;
	listint_t *nxt;

	if (head == NULL)
		return (0);

	Hed = *head;
	if (Hed == NULL)
		return (0);

	nxt = (*head)->next;

	nd = (*head)->n;
	*head = nxt;
	free(Hed);

	return (nd);
}
