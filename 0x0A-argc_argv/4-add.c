#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else 
	{
		for (i = 1; i < argc; i++) 
		{
			if (argv[i] >= '0' || argv[i] <= '9') 
			{
				sum += atoi(argv[i]);
			} 
			else 
			{
				printf("Error\n");
				return (1);
			}
		}
    		printf("%d\n", sum);
	}
	return 0;
}
