#include <stdio.h>

/**
 * main -  adds positive numbers.
 *
 * @argc:arg coun
 * @argv:arg value
 * Return: 1 if un valid
 * 0 if valid
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 0; i < argc; i++)
			if (argv[i] >= '0' || argv[i] <= '9')
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			}
			else
				return (printf("Error\n", 1));
	}
	return (0);
}

