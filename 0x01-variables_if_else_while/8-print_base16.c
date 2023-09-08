#include <stdio.h>
/**
*main -entry point
*describtion:  prints all single digit numbers of base 10
*Return: always 0 (success)
*/
int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		if (num <= 57)
		{
			putchar(num + '0');
			num++;
		}
		else if (num == 57)
		{
			putchar(num + 39);
			num++;
		}
	}
	putchar("\n");
	return (0);
}
