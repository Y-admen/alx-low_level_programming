#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - enry point
 *
 *Descriptio: print whether the  n is positive or negative
 *
 * Return: always 0 (success)
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 1)
		print ("%i is positive\n", n);
	else if (n == 0)
		print ("%i is zero\n", n);
	else
		print ("%i is negative\n", n);
	return (0);
}
