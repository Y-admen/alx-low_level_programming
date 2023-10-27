#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int clear = 1;

	if (index > 64)
		return (-1);
	clear = ~(1 << index);
	*n = (*n & clear);
	return (1);
}
