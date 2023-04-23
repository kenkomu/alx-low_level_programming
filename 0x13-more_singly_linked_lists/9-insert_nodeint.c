#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts a new node at a given point
 * @head: pointer to the first node of the list
 * @indx: point within the list to insert the node
 * @n: integer input to be inserted
 * Return: returns address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *Nnod;
	listint_t *lst = *head;

	Nnod = malloc(sizeof(listint_t));
	if (Nnod == NULL || head == NULL)
		return (NULL);

	Nnod->n = n;
	Nnod->next = NULL;

	if (idx == 0)
	{
		Nnod->next = *head;
		*head = Nnod;
		return (Nnod);
	}
	while (lst != NULL && i < idx)
	{
		if ((idx - 1) == i)
		{
			Nnod->next = lst->next;
			lst->next = Nnod;
			return (Nnod);
		}
		else
			lst = lst->next;

		i++;
	}
	return (NULL);
}
