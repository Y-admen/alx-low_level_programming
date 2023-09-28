#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x:int parameter
 * @y:int parameter
 *
 * Return: value of x
*/

int _pow_recursion(int x, int y)
{
	int value;

	if (y > 0)
		value = x * _pow_recursion(x, y - 1);
	else if (y == 0)
		value = 1;
	else
		value = -1;
	return (value);
}

