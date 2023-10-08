#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 * @min:from
 * @max:to
 * Return: p*/

int *array_range(int min, int max)
{
	int *p, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == 0)
		return (NULL);
	while (min < max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}

