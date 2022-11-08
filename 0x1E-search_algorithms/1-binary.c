#include "search_algos.h"

/**
 * print_array - print all value of an array in line
 *
 * @array: a pointer to the first element of the array to search in
 * @start: first element index of the array
 * @end: last element index of the array
 */

void print_array(int *array, int start, int end)
{
	int cLoop;

	printf("Searching in array: ");
	for (cLoop = start; cLoop <= end; cLoop++)
	{
		printf("%d", array[cLoop]);

		if (cLoop < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t cLoop;
	int start = 0, end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);
		cLoop = start + (end - start) / 2;

		if (array[cLoop] == value)
			return (cLoop);

		if (array[cLoop] > value)
			end = cLoop - 1;
		else
			start = cLoop + 1;
	}

	return (-1);
}
