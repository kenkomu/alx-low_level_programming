#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

void print_array(int *array, int start, int end);
int binary_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);

#endif
