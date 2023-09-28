#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number
 *
 * @n: int parameter
 *
 * Return: factorial
*/

int factorial(int n)
{
	int fact;

	if (n < 0)
		fact = -1;
	else if (n == 0)
		fact = 1;
	else
	{
	fact = n * factorial(n - 1);
	}
	return (fact)
}
