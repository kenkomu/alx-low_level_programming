#include "lists.h"
/**
 * free_listint2 - fucntion frees a linked list
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *Nod;

	while (*head != NULL)
	{
		Nod = *head;
		*head = (*head)->next;
		free(Nod);
	}
	*head = NULL;
}
