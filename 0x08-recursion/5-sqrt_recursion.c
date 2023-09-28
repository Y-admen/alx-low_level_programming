#include "main.h"

/**
 * sqr - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqr(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqr(a, b + 1));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 *
 * @n: int value
 *
 * Return: 1 if prime
 *      0 if not
*/

int is_prime_number(int n)
{
	return (sqr(n, 1));
}


