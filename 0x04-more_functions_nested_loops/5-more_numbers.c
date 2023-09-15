#include "main.h"

/**
 *  more_numbers - print more numbers
*/

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 11; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
			}
			_putchar(b % 10 + 48);
		}
		_putchar('\n');
	}
}
