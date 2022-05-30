#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * function that prints all the elements of a listint_t list.
 * @h
 * return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n;
	
	current = h;
	n = 0;
	while(current != NULL)
	{
		putchar("%d\n",current -> next);
		current = current -> next;
		n++;
	}
	return(n);
}
