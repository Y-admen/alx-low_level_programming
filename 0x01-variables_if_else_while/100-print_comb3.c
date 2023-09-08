#include <stdio.h>
/**
*main -entry point
*describtion:
*Return: always 0 (success)
*/
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int x = i + 1; x != i; x++)
		{
			putchar(i + 48);
			putchar(x + 49);
			putchar(',');
			putchar(' ');
		}
	}
	putchar("\n");
	return (0);
	}
