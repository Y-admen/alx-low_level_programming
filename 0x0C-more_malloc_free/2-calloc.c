#include "main.h"

/***/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *s = malloc(size * nmem);

	if (nmem == 0 || size == 0 || s == 0)
		return (NULL);
	else

