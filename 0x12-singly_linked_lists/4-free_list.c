#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * function that frees a list_t list
 * @head
 * return: 0
 */
void free_list(list_t *head){
	if(head == NULL){
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
