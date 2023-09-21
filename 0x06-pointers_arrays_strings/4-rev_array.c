#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: int parameter
 * @n: int parameter
 *
 * Return: array a
*/

void reverse_array(int *a, int n)
{
	int k, r;

	for (k = 0; k < n--; k++)
	{
	r = a[k];
	a[k] = a[n];
	a[n] = r;
	}
}

