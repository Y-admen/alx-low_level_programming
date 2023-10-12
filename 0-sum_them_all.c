#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of arg
 * @...: args
 * Return: sum*/

int sum_them_all(const unsigned int n, ...)
{
	 va_list list;
        unsigned int i, sum = 0;
	
	if (n == 0)
		return (0);

	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, const unsigned int);
	}
	va_end(list);

	return (sum);
}
