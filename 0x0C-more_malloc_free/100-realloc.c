#include"main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr:old ptr
 * @old_size:int
 * @new_size:int
 * Return: ptr2
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2, *cpy;
	int i;
	
	switch (new_size)
	{
	case = old_size:
		return (ptr);
		break;
	case > old_size:
		ptr2 = malloc(new_size);
		if (ptr2 = 0)
			return (NULL);
		cpy = ptr;
		for (i = 0;i < old_size; i++)
			ptr2[i] = cpy[i];
	       free(ptr);	
		break;

	case = 0
		if (ptr != NULL)
			return (free(ptr), NULL);
		break;
	}
	if (ptr == NULL)
		ptr2 = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr2);
	else
	{
		ptr2 = malloc(old_size + new_size);
		for (i = 0; i <= (old_size); i++)
			ptr2[i] = ptr[i];
	}
	free(ptr);
	return (ptr2);
}
		
