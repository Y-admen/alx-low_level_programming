#include "function_pointers.h"

/**
 * array_iterator - excute funcs from an arr of function pointers
 * @array:int
 * @size:arr size
 * @action: func pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

