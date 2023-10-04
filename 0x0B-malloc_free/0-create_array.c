#include "main.h"

/**
 * create_array -  creates an array of chars with a specific value= char.
 * @size: num of char
 * @c: char to intialize
 * Return: pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *con = malloc(size);

	if (size == 0 || con == 0)
		return (0);
	while (size--)
		con[size] = c;
	return (con);
}
