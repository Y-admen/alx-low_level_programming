#include <stdio.h>

/**
 * main -  multiplies two numbers.
 * @argc: arg coun
 * @argv:arg value
 * Return: 1 unvalid arg
*/
int main(int argc, char *argv[])
{
	int mull, val1, val2;

	if (argc == 3)
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		mull = val1 * val2;
		printf("%d\n", mull);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

