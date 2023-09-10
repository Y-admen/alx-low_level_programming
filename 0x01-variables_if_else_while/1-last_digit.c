#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point 
 *
 * description: print last digit of n 
 *
 * Return: always 0 (success)*/
int main(void)
{
	int n, last ;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n %10;
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
