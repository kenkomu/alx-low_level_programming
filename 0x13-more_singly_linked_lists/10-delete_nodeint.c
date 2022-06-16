#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes a node
 * @head: pointer to the first node in the list
 * @index: index of the node to be deleted
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *lst = *head;
listint_t *Nnod;
if (*head == NULL)
	return (-1);

if (index == 0)
{
	lst = lst->next;
	return (1);
}

while (i < index - 1)
{
	if (lst == NULL || (lst->next) == NULL)
		return (-1);

	lst = lst->next;
	i++;
}
Nnod = lst->next;
lst->next = Nnod->next;

return (1);
}
