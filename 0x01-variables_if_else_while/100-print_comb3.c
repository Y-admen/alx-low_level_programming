#include <stdio.h>
/**
*main -entry point
*
* describtion:  program that prints all possible different combinations of two digits.
*
*Return: always 0 (success)
*/
int main(void)
{
	int i,x;
	for ( i = 0; i <= 9; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			putchar(i + 48);
			putchar(x + 48);
			if (i + x == 17)
				continue;
			putchar(',');
			putchar(' ');
			
		}
	}
	putchar('\n');
	return (0);
}
