#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *                 using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cLoop;

	if (array == NULL)
	{
		return (-1);
	}

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		printf("Value checked array[%ld] = [%d]\n", cLoop, array[cLoop]);
		if (array[cLoop] == value)
			return (cLoop);
	}

	return (-1);
}

