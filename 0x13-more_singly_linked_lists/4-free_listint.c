#include "lists.h"
/**
 * free_listint - function frees a linked list
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *Nod;

	while (head != NULL)
	{
		Nod = head;
		head = head->next;
		free(Nod);
	}
}
