#include"main.h"

/***/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	int i;
	
	switch (new_size)
	{
	case = old_size:
		return (ptr);
		break;
	case > old_size:

		break;

	case = 0
		if (ptr != NULL)
			return (free(ptr), NULL);
		break;
	}
	if (ptr == NULL)
		ptr2 = malloc(new_size);
	else
	{
		ptr2 = malloc(old_size + new_size);
		for (i = 0; i <= (old_size); i++)
			ptr2[i] = ptr[i];
	}
	free(ptr);
	return (ptr2);
}
		
