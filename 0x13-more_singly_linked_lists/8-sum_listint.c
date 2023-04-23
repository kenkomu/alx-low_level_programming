#include "lists.h"
/**
 * sum_listint - fucntion adds upp all the data to nth node
 * @head: pointer to the first node
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *Nod = head;

	if (head == NULL)
		return (0);

	while (Nod)
	{
		sum = sum + (Nod->n);
		Nod = Nod->next;
	}
	return (sum);
}
