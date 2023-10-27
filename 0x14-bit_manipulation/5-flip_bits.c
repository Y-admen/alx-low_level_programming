#include"main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor;

	xor = n ^ m;
  /*Count the number of set bits in the XOR result*/
	while (xor > 0)
	{
		if (xor & 1)
			count++;
	xor >>= 1;
	}

	return (count);
}
