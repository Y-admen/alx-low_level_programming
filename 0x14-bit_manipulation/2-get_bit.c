#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
