#include <stdio.h>
/**
*main -entry point
*describtion:  prints all single digit numbers of base 10 
*Return: always 0 (success)
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	printf("\n");
	return (0);
}
