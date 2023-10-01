#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n(number to check the root for)
 * @b: number that iterates from 1 to n(try the square of all num)
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)/*ex a = 4, b =2*/
		return (b);
	else if (b * b > a)/*ex a = 3*/
		return (-1);
	return (sqrt2(a, b + 1));/*inc b for next num 3*/
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));/*start itration from 1*/
}
