#include "main.h"

/**
 * binary_to_uint - conv binary to decimal
 * @b: pointer to
 * Return: decimal
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int base_2, pow, decimal;
	int len;

	if (!b)
		return (0);
	for (len = 0 ; b[len] != "\0"; len++)
		;
	for (len--, pow = 0; len; pow++, base_2 = 2 ^ pow)
		if (b[len] != 0 && b[len] != 1)
			return (0);
		if (b[len] == 1)
			decimal += base_2;
	return (decimal);
}
