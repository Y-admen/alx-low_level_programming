#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int
 * Return: poi in success
 * (98) in fail
 */

void *malloc_checked(unsigned int b)
{
	void *poi = malloc(b);

	if (poi == NULL)
		exit(98);
	return (poi);
}
