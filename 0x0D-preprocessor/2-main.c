#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from
 * Return: 0 Always
*/
int main(void)
{
	printf("%s\n", __FILE__);/*file upper case*/
	return (0);
}
