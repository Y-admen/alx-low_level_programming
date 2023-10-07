#include <stdio.h>

/**
 * main -  multiplies two numbers.
 * @argc: arg coun
 * @argv:arg value
 * Return: 1 unvalid arg
*/
int main(int argc, char *argv[])
{
	int mul, val1, val2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		mull = val1 * val2;
		printf("%d\n", mull);
	}
	return (0);
}

