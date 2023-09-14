#include "main.h"

/**
 * _isdigit - function to check if digit
 *
 * @c: input parameter
 *
 * Return:1 for digite
 *	0 for not
*/

int _isdigit(int c)
{
	if (c > 47 && c < 57)
		return (1);
	else
		return (0);
}

