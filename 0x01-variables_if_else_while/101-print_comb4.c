#include <stdio.h>
/**
*main -entry point
*
* describtion: print all possible different combinations of two digits.
*
*Return: always 0 (success)
*/
int main(void)
{
	int i, x, l;

	for (i = 0; i < 8; i++)
	{
		for (x = i + 1; x < 9; x++)
		{
			for (l = x + 1; l < 10; l++)
			{
				putchar(i + 48);
				putchar(x + 48);
				putchar(l + 48);
				if (i + x + l == 24)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
