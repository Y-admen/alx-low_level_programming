#include "main.h"

/**
 * rev_string -  function that reverses a string.
 *
 * @s: char parameter
 * Return: nothing
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

