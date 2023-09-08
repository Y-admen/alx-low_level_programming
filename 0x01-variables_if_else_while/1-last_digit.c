#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry pont
 *
 * Description: print the last digit and check if >5, =0, <6
 *
 * Return: always 0 (success)
*/

int main(void)
{
	digit = n % 10;
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	int  digit;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is zero\n", n, digit);
	else if (digit != 0 && digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
