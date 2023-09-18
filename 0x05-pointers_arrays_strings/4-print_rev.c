#include "main.h"
 /**
  * print_rev -  prints a string, in reverse, followed by a new line
  *
  * @s: char parameter
  *
  * return: nothing
*/

void print_rev(char *s)
{
	int i;/*s acounter for char*/

	for (s[i]; i++)
	for (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

