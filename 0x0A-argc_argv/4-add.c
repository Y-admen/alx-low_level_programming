#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	int i, sum = 0;

	if (argc == 1)
	printf("0\n");
	else {
		for (i = 0; i < argc; i++) 
		{
			if (argv[i] < '0' || argv[i] > '9')
			{	
				printf("Error\n");
				return (1);
			}
			else
				sum += argv[i];
		}
		printf("%d\n", sum);
		}
	return 0;
}

