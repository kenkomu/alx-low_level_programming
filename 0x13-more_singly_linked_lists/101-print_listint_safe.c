#include "lists.h"
/**
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count += 1;
		head = head->next;
	}
	return (count);
}
