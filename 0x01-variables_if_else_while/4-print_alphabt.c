#include <stdio.h>
/**
*main - entry point
*
*describtion: alphabet in lowercase, followed by a new line  except q and e
*
*Return: always 0 (success)
*/
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az == 'e' || az == 'q')
			az++;
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
