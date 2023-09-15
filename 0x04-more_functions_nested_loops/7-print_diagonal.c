#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		int y, z;

		for (y = 1; y <= n; y++)
		{
			for (z = 1; z <= y; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}


