#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *                 of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
	{
	size_t cloop;
	int size = sizeof(array) / sizeof(array[0]);
	int lastElem = array[size - 1];
	int firstElem = array[0];

	if (array == NULL)
	{
		return (-1);
	}
	while (lastElem <= firstElem)
	{
		int mid =  +(firstElem - lastElem) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			lastElem = mid + 1;

		else
			firstElem = mid - 1;
	}

	return (-1);
}
