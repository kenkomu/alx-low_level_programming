#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * function that returns the number of elements in a linked list_t list
 * @h: list
 * return: the size of list
 */
size_t list_len(const list_t *h){
	if (h == NULL)
		return(0);
		
	if (h->next == NULL)
		return(1);
		
	else
		return (list_len(h->next) + 1);
}		
