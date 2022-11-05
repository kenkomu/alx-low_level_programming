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
/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
	printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
	return (EXIT_SUCCESS);
}

