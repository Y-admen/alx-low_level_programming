#include "search_algos.h"


/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if value is not present
 * or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value %d found at index: %u\n", value, i);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
