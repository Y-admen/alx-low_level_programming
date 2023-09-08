#include <stdio.h>
/**
 * main - entry point
 * description: putchar letters from a to z in upprr and lower
 * return: always 0 (success)
*/

int main(void)
{
	char let = 'a';
	char LET = 'A';

	while (let <= 'z')
	{
		putchar (let);
		let++;
	}
	while (LET <= 'Z')
	{
		putchar (LET);
		LET++;
	}
	putchar ('\n');
	return (0);
}

