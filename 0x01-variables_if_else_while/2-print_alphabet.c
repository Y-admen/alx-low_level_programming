#include <stdio.h>
/**
 * main - entry point
 *
 * description: print the alphabet from a to z
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		putchar (let);
		let++;
	}
	putchar ('\n');
	return (0);
}
