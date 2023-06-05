#include"lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: first element
 * Return: frees a dlistint list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
