#include <stdio.h>
/**
 * main - entry point
 * description: print combination of two numbers
 * Return: always 0 (success)
*/
int main(void)
{
	int x, y;

	for (x = 0; x < 99; x++)
	{
		for (y = 1; x < 98 ; x++)
		{
			putchar((x / 10) + 48);
			putchar((x % 10) + 48);
			putchar(' ');
			putchar((y / 10) + 48);
			putchar((y % 10) + 48);
			if (x == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

