#include <stdio.h>
/**
 * main -entry point
 *
 * describtion: program that prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char rlet = 'z';

	while (rlet > 'a')
	{
		putchar(rlet);
		rlet--;
	}
	putchar("\n");
	return (0);
}
