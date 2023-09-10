#include <stdio.h>
/**
*main -entry point
*describtion:  prints all single digit numbers of base 10
*Return: always 0 (success)
*/
int main(void)
{
	int num = 0;

	while (num <= 102)
	{
		putchar(num);
		num++;
		if (num == 57)
		{
			num += 39;
			num++;
		}
	}
	putchar('\n');
	return (0);
}
