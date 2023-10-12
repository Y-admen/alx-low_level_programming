#include "variadic_functions.h"

/**
 *print_numbers  -  prints numbers, followed by a new line.
 *@separator: string to be printed between numbers
 *@n: num of args
 *...: args
 *Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
		char *sep;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}
