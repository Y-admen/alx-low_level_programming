#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 *
 *Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i ;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
		dest[i] = '\0';
		i++;
}
