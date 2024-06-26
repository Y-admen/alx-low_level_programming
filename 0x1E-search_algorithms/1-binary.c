#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 * binary search algorithm
 *
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for in the array
 *
 * Return: The index of the first occurrence of @value in the array, or -1 if
 * @value is not present in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
