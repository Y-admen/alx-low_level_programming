#include"main.h"
#include <stdio.h>


/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr:old ptr
 * @old_size:int
 * @new_size:int
 * Return: ptr2
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *cpy;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	if (new_size > old_size)
	{
		s = malloc(new_size * sizeof(char));
		cpy = ptr;
		for (i = 0; i < old_size; i++)
			s[i] = cpy[i];
		free(ptr);
		return (s);
	}
	return (ptr);
}
